# 여러 위젯 출력해 보기

from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton, \
QLabel, QLineEdit, QCheckBox, QRadioButton, \
QComboBox, QDateTimeEdit, QFontComboBox, \
QVBoxLayout,QWidget

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("Widgets App")
        layout = QVBoxLayout()
        widgets = [
            QCheckBox,QRadioButton, QComboBox, QDateTimeEdit,
            QFontComboBox, QLabel, QLineEdit, QPushButton 
        ]
        
        for w in widgets:
            layout.addWidget(w()) # w()을 호출해야 해당 클래스의 인스턴스를 생성
        widget = QWidget()
        widget.setLayout(layout)
        self.setCentralWidget(widget) # 중앙에 위치하며, 창의 모든 공간을 차지한다

app = QApplication([])
window = MainWindow()
window.show()
app.exec()