# 여러가지 형태의 출력 레이아웃

from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton, \
            QLabel, QWidget, QVBoxLayout, QHBoxLayout, QGridLayout

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("PyQt6 레이아웃 예제")
        self.setGeometry(100, 100, 400, 300)
        
        # 1️. QVBoxLayout 예제 (세로 배치)
        vbox_layout = QVBoxLayout()
        vbox_layout.addWidget(QLabel("QVBoxLayout 예제"))
        vbox_layout.addWidget(QPushButton("버튼 1"))
        vbox_layout.addWidget(QPushButton("버튼 2"))
        vbox_layout.addWidget(QPushButton("버튼 3"))
        
        hbox_layout = QHBoxLayout()
        hbox_layout.addWidget(QLabel("QHBoxLayout 예제"))
        hbox_layout.addWidget(QPushButton("버튼 A"))
        hbox_layout.addWidget(QPushButton("버튼 B"))
        hbox_layout.addWidget(QPushButton("버튼 C"))
        
        # 3️. QGridLayout 예제 (격자 배치)
        grid_layout = QGridLayout()
        # (row, col, row span, col span)
        grid_layout.addWidget(QLabel("QGridLayout 예제"), 0, 0)
        grid_layout.addWidget(QPushButton("버튼 1"), 1, 0)
        grid_layout.addWidget(QPushButton("버튼 2"), 1, 1)
        grid_layout.addWidget(QPushButton("버튼 3"), 2, 0)
        grid_layout.addWidget(QPushButton("버튼 4"), 2, 1)
        
        main_Widget = QVBoxLayout()
        main_Widget.addLayout(vbox_layout)
        main_Widget.addLayout(hbox_layout)
        main_Widget.addLayout(grid_layout)
        
        container = QWidget()
        container.setLayout(main_Widget)
        self.setCentralWidget(container)
        
app = QApplication([])
window = MainWindow()
window.show()
app.exec()
