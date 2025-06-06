# 메뉴 구성

from PyQt6.QtCore import Qt
from PyQt6.QtGui import QAction
from PyQt6.QtWidgets import QApplication, QMainWindow, QLabel, QMenu

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("My App")
        
        menu = self.menuBar()
        file_menu = menu.addMenu("File")
        
        open_action = QAction("열기", self)
        file_menu.addAction(open_action)
        open_action.triggered.connect(self.onOpen)
        
        save_action = QAction("저장", self)
        save_action.triggered.connect(self.onSave)
        file_menu.addAction(save_action)
        
        close_action = QAction("종료", self)
        close_action.triggered.connect(self.close) # 함수 이름만 전달 (괄호 X)
        file_menu.addAction(close_action)
        
    def onOpen(self):
        self.label.setText("파일열기 메뉴 선택")
    
    def onSave(self):
        self.label.setText("파일저장 메뉴 선택") 
        
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