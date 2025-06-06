# Qwidget을 이용한 폼 만들기

from PyQt6.QtWidgets import QApplication, QWidget

app = QApplication([]) # app 객체 생성

window = QWidget() #window 객체 생성
window.setWindowTitle("내 창 제목")
window.show()

app.exec() # 이벤트 루프를 시작함