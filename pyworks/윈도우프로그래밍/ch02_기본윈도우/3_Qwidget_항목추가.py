from PyQt6.QtWidgets import QApplication, QWidget, QLabel, QPushButton

app = QApplication([]) # app 객체 생성

window = QWidget() #window 객체 생성
window.setWindowTitle("내 창 제목")

# QLabel 추가, QLabel은 window 위젯 안에 포함되고 해당 위젯의 부모를 지정
label = QLabel( "Hello world!!", parent=window)
label.move(50,20)# 레이블 위치 설정 (x=50, y=20)
button = QPushButton("Click Me", parent=window)
button.move(50,50)

window.show()
app.exec() # 이벤트 루프를 시작함