# 김기용 과제

from PyQt6.QtCore import Qt
from PyQt6.QtGui import QAction
from PyQt6.QtWidgets import QApplication, QMainWindow, QLabel, QMenu
from PyQt6.QtWidgets import QApplication, QMainWindow, \
                    QFileDialog, QPushButton, QVBoxLayout, \
                    QWidget, QTextEdit

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("메모장")
        self.setGeometry(100, 100, 500, 500)
        
        self.textedit = QTextEdit()
        
        menu = self.menuBar()
        file_menu = menu.addMenu("File")
        
        # 새문서
        new_action = QAction("새 문서", self)
        new_action.triggered.connect(self.newFile)
        file_menu.addAction(new_action)
        
        open_action = QAction("열기", self)
        open_action.triggered.connect(self.onOpen)
        file_menu.addAction(open_action)
        
        save_action = QAction("저장", self)
        save_action.triggered.connect(self.onSave)
        file_menu.addAction(save_action)
        
        close_action = QAction("종료", self)
        close_action.triggered.connect(self.close) # 함수 이름만 전달 (괄호 X)
        file_menu.addAction(close_action)
        
    def newFile(self):
        self.textedit.clear()
        
    def onOpen(self):
        filters = "image files (*.png | *.ico);; comma separated Values (*.csv) ;; \
                   text files (*.txt);; All files (*)"
        # 파일명, 필터
        filename, _ = QFileDialog.getOpenFileName(self, 
                                               caption="Select a File", # 대화 상자 제목
                                               directory = "",              # 초기 디렉토리     
                                               filter=filters,         # 필터 설정
                                               initialFilter="All files (*)"  #디폴트 필터
                                               )
        print("result: ", filename)
        
        if not filename:  # 사용자가 파일 선택을 취소한 경우
            print("파일 선택이 취소되었습니다.")
            return
        
        with open(filename, "r", encoding="utf-8") as f:  # 파일 열기
            file_content = f.read()  # 파일 내용 읽기, 전체내용 문자열로 가져옴
            
        self.textedit.setText(file_content)
    
    def onSave(self):
        filters = "image files (*.png | *.ico);; \
                   text files (*.txt);; All files (*)"
        filename, _ = QFileDialog.getSaveFileName(self, 
                                               caption="Select a File", # 대화 상자 제목
                                               directory = "",          # 초기 디렉토리     
                                               filter=filters,          # 필터 설정
                                               initialFilter="All files (*)"  #디폴트 필터
                                              )
        print("result: ", filename)
        
        if not filename:  # 사용자가 취소를 누른 경우
            return
        
        # 파일 저장   
        with open(filename, "w", encoding="utf-8") as f:
            file_content = self.textedit.toPlainText()
            f.write(file_content)   
        print("파일저장 !!")
        
    # 단축메뉴 :사용자가 우클릭한 지점 자동실행
    def contextMenuEvent(self, event):
        menu = QMenu(self)
        action1 = menu.addAction("Open")
        action2 = menu.addAction("Save")
        action3 = menu.addAction("Quit")
        
        # 마우스 위치에 컨텍스트 메뉴 표시
        action = menu.exec(event.globalPos())
        
        if action == action1:
            #QMessageBox.information(self, "알림", "Open 선택")
            self.label.setText("파일열기 메뉴 선택")
        elif action == action2:
            #QMessageBox.information(self, "알림", "Save 선택")
            self.label.setText("파일저장 메뉴 선택")
        elif action == action3:
            self.close()
    
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()