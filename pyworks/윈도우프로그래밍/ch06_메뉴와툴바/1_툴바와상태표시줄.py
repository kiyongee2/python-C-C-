# 툴바와 상태 표시줄

from PyQt6.QtWidgets import QMainWindow, QApplication, \
            QLabel, QToolBar, QStatusBar
from PyQt6.QtGui import QAction, QIcon
from PyQt6.QtCore import Qt
from PyQt6.QtCore import QSize
import subprocess  #외부 모듈 실행

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("My App")
        self.setGeometry(100, 100, 300, 200)
        
        self.label = QLabel("Hello!")
        self.label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.setCentralWidget(self.label)
        
        toolbar = QToolBar("My Main toolbar")
        self.addToolBar(toolbar)
        toolbar.setIconSize(QSize(16, 16))

        
        button_action1 = QAction("first", self)
        button_action1.setToolTip("button first")
        toolbar.addAction(button_action1)
        
        button_action1.triggered.connect(self.onMyToolBarButtonClick1)
        
        # 상태표시줄에 출력 문자열
        button_action1.setStatusTip("문자열 툴바 버튼 선택합니다")
        self.setStatusBar(QStatusBar(self)) 
        
        # Icon 도구버튼 추가
        button_action2 = QAction(QIcon("calc.png"),"icon button", self)
        button_action2.setStatusTip("icon 선택하면 계산기 실행")
        button_action2.triggered.connect(self.onMyToolBarButtonClick2)
        toolbar.addAction(button_action2)
        
        # Icon 파일 연결
        button_action3 = QAction(QIcon("msgbox01.ico"),"icon button", self)
        button_action3.setStatusTip("프로그램 종료")
        button_action3.triggered.connect(self.onMyToolBarButtonClick3)
        toolbar.addAction(button_action3)
        
    # 외부 프로세스를 실행한다
    def onMyToolBarButtonClick2(self, s):
        subprocess.Popen(["calc.exe"])
        
    def onMyToolBarButtonClick1(self):
        self.label.setText("첫 번째 툴바 버튼 선택")
        
    #실행 중인 QMainWindow를 종료
    def onMyToolBarButtonClick3(self):
        QApplication.quit()

    
        
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()