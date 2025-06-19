from PyQt6.QtCore import Qt
from PyQt6.QtGui import QAction
from PyQt6.QtWidgets import (QApplication, QMainWindow, QLabel, QMenu, 
                            QFileDialog, QMessageBox, QTextEdit)

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("메모장")
        self.setGeometry(100, 100, 800, 600)
        
        self.textedit = QTextEdit()
        self.setCentralWidget(self.textedit)
        
        self.create_menus()
        self.current_file = None  # 현재 열린 파일 경로 저장
        
    def create_menus(self):
        """메뉴바 생성"""
        menu = self.menuBar()
        
        # File 메뉴
        file_menu = menu.addMenu("File")
        
        # 새 문서
        new_action = QAction("새 문서", self)
        new_action.triggered.connect(self.new_file)
        file_menu.addAction(new_action)
        
        # 열기
        open_action = QAction("열기", self)
        open_action.triggered.connect(self.on_open)
        file_menu.addAction(open_action)
        
        # 저장
        save_action = QAction("저장", self)
        save_action.triggered.connect(self.on_save)
        file_menu.addAction(save_action)
        
        # 다른 이름으로 저장
        save_as_action = QAction("다른 이름으로 저장", self)
        save_as_action.triggered.connect(self.on_save_as)
        file_menu.addAction(save_as_action)
        
        # 종료
        exit_action = QAction("종료", self)
        exit_action.triggered.connect(self.close)
        file_menu.addAction(exit_action)
        
    def new_file(self):
        """새 문서 생성"""
        if self.textedit.document().isModified():
            reply = QMessageBox.question(
                self, '저장 확인',
                '변경 내용을 저장하시겠습니까?',
                QMessageBox.StandardButton.Save | 
                QMessageBox.StandardButton.Discard | 
                QMessageBox.StandardButton.Cancel
            )
            
            if reply == QMessageBox.StandardButton.Save:
                self.on_save()
            elif reply == QMessageBox.StandardButton.Cancel:
                return
        
        self.textedit.clear()
        self.current_file = None
        self.setWindowTitle("메모장 - 새 문서")
        
    def on_open(self):
        """파일 열기"""
        if self.textedit.document().isModified():
            self.new_file()  # 변경사항 확인
            
        filters = "텍스트 파일 (*.txt);;모든 파일 (*.*)"
        filename, _ = QFileDialog.getOpenFileName(
            self, "파일 열기", "", filters
        )
        
        if filename:
            try:
                with open(filename, 'r', encoding='utf-8') as f:
                    self.textedit.setText(f.read())
                self.current_file = filename
                self.setWindowTitle(f"메모장 - {filename}")
            except Exception as e:
                QMessageBox.critical(self, "오류", f"파일을 열 수 없습니다:\n{str(e)}")
    
    def on_save(self):
        """파일 저장"""
        if self.current_file:
            self._save_to_file(self.current_file)
        else:
            self.on_save_as()
            
    def on_save_as(self):
        """다른 이름으로 저장"""
        filters = "텍스트 파일 (*.txt);;모든 파일 (*.*)"
        filename, _ = QFileDialog.getSaveFileName(
            self, "파일 저장", "", filters
        )
        
        if filename:
            if not filename.endswith('.txt'):
                filename += '.txt'
            self._save_to_file(filename)
            self.current_file = filename
            self.setWindowTitle(f"메모장 - {filename}")
    
    def _save_to_file(self, filename):
        """실제 파일 저장 로직"""
        try:
            with open(filename, 'w', encoding='utf-8') as f:
                f.write(self.textedit.toPlainText())
            self.textedit.document().setModified(False)
        except Exception as e:
            QMessageBox.critical(self, "오류", f"파일 저장 실패:\n{str(e)}")
    
    def closeEvent(self, event):
        """창 닫기 이벤트 처리"""
        if self.textedit.document().isModified():
            reply = QMessageBox.question(
                self, '저장 확인',
                '변경 내용을 저장하시겠습니까?',
                QMessageBox.StandardButton.Save | 
                QMessageBox.StandardButton.Discard | 
                QMessageBox.StandardButton.Cancel
            )
            
            if reply == QMessageBox.StandardButton.Save:
                self.on_save()
            elif reply == QMessageBox.StandardButton.Cancel:
                event.ignore()
                return
        
        event.accept()

# 실행 코드
if __name__ == "__main__":
    app = QApplication([])
    window = MainWindow()
    window.show()
    app.exec()