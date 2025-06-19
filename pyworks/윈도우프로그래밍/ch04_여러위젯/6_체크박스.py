# 체크 박스

from PyQt6.QtWidgets import QApplication, QMainWindow, QWidget ,\
                     QVBoxLayout, QCheckBox, QLabel

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(100, 100, 300, 150)  # 창 크기 설정

        # 체크박스 개별 선언
        self.checkbox_seoul = QCheckBox("서울")
        self.checkbox_busan = QCheckBox("부산")
        self.checkbox_incheon = QCheckBox("인천")
        self.checkbox_suwon = QCheckBox("수원")
        self.checkbox_daejeon = QCheckBox("대전")

        # 선택된 도시를 표시할 QLabel
        self.label = QLabel("선택된 도시: 없음")

        # 레이아웃 설정
        layout = QVBoxLayout()
        layout.addWidget(self.checkbox_seoul)
        layout.addWidget(self.checkbox_busan)
        layout.addWidget(self.checkbox_incheon)
        layout.addWidget(self.checkbox_suwon)
        layout.addWidget(self.checkbox_daejeon)
        layout.addSpacing(10)
        layout.addWidget(self.label)  # QLabel 추가
        
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)        

        # 체크박스 변경 이벤트 연결
        self.checkbox_seoul.stateChanged.connect(self.update_label)
        self.checkbox_busan.stateChanged.connect(self.update_label)
        self.checkbox_incheon.stateChanged.connect(self.update_label)
        self.checkbox_suwon.stateChanged.connect(self.update_label)
        self.checkbox_daejeon.stateChanged.connect(self.update_label)

    def update_label(self):
        # 선택된 체크박스를 확인하여 리스트로 저장
        selected_city = []
        if self.checkbox_seoul.isChecked():
            selected_city.append("서울")
        if self.checkbox_busan.isChecked():
            selected_city.append("부산")
        if self.checkbox_incheon.isChecked():
            selected_city.append("인천")
        if self.checkbox_suwon.isChecked():
            selected_city.append("수원")
        if self.checkbox_daejeon.isChecked():
            selected_city.append("대전")

        # QLabel에 선택된 도시 목록 표시
        if selected_city:
            self.label.setText(f"선택된 도시 : {selected_city}")
            #self.label.setText(f"선택된 도시: {', '.join(selected_city)}")
        else:
            self.label.setText("선택된 도시: 없음")

# 실행 코드
app = QApplication([])
window = MyWindow()
window.show()
app.exec()

