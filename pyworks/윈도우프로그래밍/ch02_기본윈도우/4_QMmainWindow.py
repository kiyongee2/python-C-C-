from PyQt6.QtWidgets import QApplication, QMainWindow

app = QApplication([]) # app 객체 생성

window = QMainWindow()
window.setWindowTitle("내 창 제목")
window.show()

app.exec()