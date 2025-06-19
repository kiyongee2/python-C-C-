# ui 파일 로드

# uic는 Qt Designer에서 만든 .ui 파일을 Python에서 직접 불러와 사용할
# 수 있도록 도와주는 PyQt6 모듈이다
from PyQt6.QtWidgets import QApplication, QMainWindow, QMessageBox
from PyQt6 import uic

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        # uic.loadUi()를 사용하여 qt_desi_1.ui 파일을
        # MainWindow 객체 (self)에 로드.
        uic.loadUi("ex01.ui", self)
        
        self.pushButton.clicked.connect(self.msg_show)
        
    # def msg_show(self):
    #     text = self.textEdit.
        
       
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()