# QMainWindow를 상속받는 클래스 상속
from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton
import os
from PyQt6.QtGui import QIcon

class MainWindow(QMainWindow):
    # self - 클래스의 인스턴스 자신을 카리키는 참조
    # 클래스 생성자 메서드
    def __init__(self):
        super().__init__() #부모클래스 생성자 호출하여 기본 동작을 초기화
        
        self.setWindowTitle("My App")
        self.setGeometry(300, 300, 300, 200)
        
        button = QPushButton("Press me !", self)
        button.setGeometry(80, 50, 150, 80)
        button.setCheckable(True)
        
        button.clicked.connect(self.button_click) #버튼에 시그널 연결
        
        icon_path = r"FACE02.ICO"
        if os.path.exists(icon_path): # 파일 존재 여부 확인
            icon = QIcon(icon_path) # 아이콘 파일 로드
            self.setWindowIcon(icon) # 윈도우 타이틀 아이콘 변경
        else:
            print(f"경고: 아이콘 파일을 찾을 수 없습니다. ({icon_path})")
            
        # 메서드 호출
        self.button_click(True)
        self.button_click(False)
    
    # 슬롯(메서드) : 버튼에서 클릭된 시그널을 수신하는 메서드   
    def button_click(self, ck):
        print("Click!!", ck)

app = QApplication([]) # app 객체 생성
window = MainWindow()
window.show()
app.exec()