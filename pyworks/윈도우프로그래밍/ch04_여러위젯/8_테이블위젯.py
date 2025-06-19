# 테이블 위젯 - 데이터를 표 형식으로 표시하고 편집할 수 있다.

from PyQt6.QtWidgets import QApplication, QMainWindow, QLabel, \
QVBoxLayout, QTableWidget, QTableWidgetItem, QWidget, QPushButton

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("QTableWidget 예제")
        self.setGeometry(200, 200, 350, 300)
        
        # QTableWidget 생성 (3행 3열)
        self.table = QTableWidget()
        self.table.setRowCount(5) # 행 개수
        self.table.setColumnCount(3) # 열 개수
        
        self.table.setHorizontalHeaderLabels(["성명", "나이", "직업"])
        self.table.setItem(0, 0, QTableWidgetItem("흥부장"))
        self.table.setItem(0, 1, QTableWidgetItem("45"))
        self.table.setItem(0, 2, QTableWidgetItem("개발자"))
        
        self.table.setItem(1, 0, QTableWidgetItem("김대리"))
        self.table.setItem(1, 1, QTableWidgetItem("33"))
        self.table.setItem(1, 2, QTableWidgetItem("디자이너"))
        
        self.table.setItem(2, 0, QTableWidgetItem("이사원"))
        self.table.setItem(2, 1, QTableWidgetItem("28"))
        self.table.setItem(2, 2, QTableWidgetItem("마케터"))
        
        self.label = QLabel("table 셀을 선택하면 이곳에 출력합니다")
        
        self.table.cellClicked.connect(self.label_print)
        
        self.add_button = QPushButton("행추가")
        self.add_button.clicked.connect(self.add_row)
        
        # 레이아웃 설정
        layout = QVBoxLayout()
        layout.addWidget(self.table)
        layout.setSpacing(10)
        layout.addWidget(self.label)
        layout.addWidget(self.add_button)
        
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)
        
    def label_print(self, row, column):
        item = self.table.item(row, column)
        if item:
            self.label.setText(f"행: {row}, 열: {column}, 텍스트: {item.text()}")

    def add_row(self):
        row_count = self.table.rowCount()
        self.table.insertRow(row_count)
            
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()