# 레이블과 명령 버튼
from PyQt6.QtWidgets import QApplication, QMainWindow, \
                QPushButton, QLabel
from PyQt6.QtGui import QFont, QPixmap

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("My App")
        self.setGeometry(200,200,400,400)
        
        self.label = QLabel("Hello", self) #self 쓰는 이유 - 다른 메서드에서 사용
        font = QFont() # QFont()를 사용해 폰트를 설정할 객체를 생성
        font.setPointSize(30) # 글꼴 크기를 30포인트로 변경
        self.label.setFont(font) # 변경된 폰트를 다시 라벨에 적용
        self.label.setGeometry(50,20,300,330)
        
        button = QPushButton("Cilck", self)
        button.setGeometry(50,360,300,50)
        button.clicked.connect(self.button_click)
        # 버튼을 선택하면 Qpixmap 을 사용하여 이미지 연결
        
    def button_click(self):
        pixmap = QPixmap(r"국화.jpg") # 이미지 파일
        # 이미지 연결코드 추가
        if not pixmap.isNull():
            self.label.setPixmap(pixmap)
            self.label.setScaledContents(True) #이미지 크기에 맞춤
        else:
            self.label.setText("파일을 읽을 수 없습니다.")
        
app = QApplication([])
window = MainWindow()
window.show()
app.exec()

