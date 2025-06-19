# 옵션 버튼(하나만 선택)

from PyQt6.QtWidgets import QApplication, QMainWindow, QLabel, \
QRadioButton, QVBoxLayout, QHBoxLayout, QWidget

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("성별 및 도시 선택")
        self.setGeometry(100, 100, 300, 200)
        
        # 성별 선택
        self.label_gender = QLabel("성별을 선택하세요.")
        self.radio1 = QRadioButton("남성")  #매개변수 - 텍스트
        self.radio2 = QRadioButton("여성")
        
        self.radio1.toggled.connect(self.update_gender)
        self.radio2.toggled.connect(self.update_gender)
        
        # 성별 버튼을 가로 정렬
        gender_layout = QHBoxLayout()
        gender_layout.addWidget(self.radio1)
        gender_layout.addWidget(self.radio2)
        
        # - 메인 레이아웃
        layout = QVBoxLayout()
        layout.addLayout(gender_layout) # 성별 선택 가로 레이아웃 추가
        layout.addWidget(self.label_gender) # 성별 결과 레이블 추가

        # 중앙 위젯 설정
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)
        
    def update_gender(self): #시그널 메서드
        if self.radio1.isChecked():
            self.label_gender.setText(f"선택된 성별: {self.radio1.text()}")
        elif self.radio2.isChecked():
            self.label_gender.setText(f"선택된 성별: {self.radio2.text()}")
        
app = QApplication([])
window = MainWindow()
window.show()
app.exec()