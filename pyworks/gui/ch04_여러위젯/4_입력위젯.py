# 입력버튼 위젯

from PyQt6.QtWidgets import QApplication, QMainWindow, QLabel, \
QLineEdit, QTextEdit, QVBoxLayout, QHBoxLayout, QWidget
from PyQt6.QtGui import QIntValidator

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("개인 정보 입력")
        self.setGeometry(100, 100, 400, 250) # 창 크기 설정
        
        # 성명 입력
        name_label = QLabel("성명:")
        name_input = QLineEdit() # 일반 입력 필드
        
        # 월급 입력 (숫자만 입력 가능)
        self.salary_label = QLabel("월급:")
        self.salary_input = QLineEdit()
        
        self.salary_input.setValidator(QIntValidator())
        
        # 월급 입력 , 연결할 이벤트 시그널은 다음과 같다.
        self.salary_input.editingFinished.connect(self.salary_check)
        
        # 주소 입력
        address_label = QLabel("주소:")
        address_input = QTextEdit()
        
        # 수평 레이아웃 설정
        name_layout = QHBoxLayout()
        name_layout.addWidget(name_label)
        name_layout.addWidget(name_input)
        
        salary_layout = QHBoxLayout()
        salary_layout.addWidget(self.salary_label)
        salary_layout.addWidget(self.salary_input)
        
        address_layout = QHBoxLayout()
        address_layout.addWidget(address_label)
        address_layout.addWidget(address_input)
        
        # 메인 레이아웃
        layout = QVBoxLayout()
        layout.addLayout(name_layout) # 성명 입력 필드 추가
        layout.addLayout(salary_layout) # 월급 입력 필드 추가
        layout.addLayout(address_layout) # 주소 입력 필드 추가
        
        # 중앙 위젯 설정
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)
        
    def salary_check(self):
        if self.salary_input.text() == "":
            return
        text = self.salary_input.text().replace(",", "")
        self.salary_input.setText(f"{int(text):,}")
        
app = QApplication([])
window = MainWindow()
window.show()
app.exec()