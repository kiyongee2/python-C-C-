# 버튼 제작
from PyQt6.QtWidgets import QApplication, QPushButton

app = QApplication([])

window = QPushButton("Push Me!") #QWidget 상속받음
window.setWindowTitle("내 창 제목")
window.show()

app.exec()