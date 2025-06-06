# QMainWindow를 상속받는 클래스 상속
from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton

class MainWindow(QMainWindow):
    # self - 클래스의 인스턴스 자신을 카리키는 참조
    # 클래스 생성자 메서드
    def __init__(self):
        super().__init__() #부모클래스 생성자 호출하여 기본 동작을 초기화
        
        self.setWindowTitle("My App")
        button = QPushButton("Press me !")
    
        self.setCentralWidget(button)

app = QApplication([]) # app 객체 생성
window = MainWindow()
window.show()
app.exec()