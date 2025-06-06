# 콤보 박스

from PyQt6.QtWidgets import QMainWindow, QApplication, QComboBox, \
QPushButton, QVBoxLayout, QWidget

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("My App")
        self.setGeometry(100, 100, 300, 200)
        
        self.comboBox = QComboBox() # 드롭다운 메뉴를 제공하는 위젯
        self.comboBox.addItems(["One", "Two", "Three","Four", "Five"])
        self.comboBox.setEditable(True) # 사용자가 직접 입력할 수 있도록 설정
        
        # self.comboBox.currentIndexChanged.connect(self.text_changed)
        self.comboBox.currentTextChanged.connect(self.text_changed)
        
        # self.comboBox.setInsertPolicy(QComboBox.setInsertPolicy.Noinsert)
        
        # 버튼을 눌러 항목 추가
        self.button1 = QPushButton("Add Item")
        self.button1.clicked.connect(self.add_new_item)
        
        # 버튼을 눌러 항목 삭제
        self.button2 = QPushButton("Remove Item")
        self.button2.clicked.connect(self.remove_item)
        
        # 레이아웃 설정
        layout = QVBoxLayout()
        layout.addWidget(self.comboBox)
        layout.addWidget(self.button1) # 버튼 레이아웃 추가
        layout.addWidget(self.button2)
        
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)
        
    def add_new_item(self):
        text = self.comboBox.currentText() # 입력된 텍스트 가져오기
        self.comboBox.addItem(text) # 새로운 항목 추가
        self.comboBox.setCurrentIndex(self.comboBox.count() - 1)
    
    def remove_item(self):
        self.comboBox.removeItem(self.comboBox.currentIndex())
        self.comboBox.setCurrentIndex(0)

    def text_changed(self, s):
        print("선택항목: ", s)
        
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()