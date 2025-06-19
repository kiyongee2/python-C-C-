from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton, \
        QInputDialog, QLineEdit,QVBoxLayout, QWidget

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("My App")
        self.setGeometry(300, 300, 250, 150)
        
        layout = QVBoxLayout()
        
        button1 = QPushButton("정수")
        button1.clicked.connect(self.get_int)
        layout.addWidget(button1)
        
        button2 = QPushButton("문자열 ")
        button2.clicked.connect(self.get_text)
        layout.addWidget(button2)
        
        button3 = QPushButton("리스트 선택")
        button3.clicked.connect(self.get_list)
        layout.addWidget(button3)
        
        # 중앙에 배치
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container) 
        
    def get_int(self): 
        # 값범위 : QInputDialog.getInt(parent, title, label, value=0, min=INT_MIN, max=INT_MAX, step=1)
        int_value, ok = QInputDialog.getInt(self, "판매수량","수량 입력 ?", 
                                            value=0, min=-500, max=500, step=10 )
        print("입력항목 : ", ok, int_value)

    def get_text(self):
        
        # #echo=QLineEdit.EchoMode.Password,  # 입력값을 숨김
        text_value, ok = QInputDialog.getText(
            self,
            "암호",
            "암호 입력",
            echo=QLineEdit.EchoMode.PasswordEchoOnEdit,   # 입력할때는 보이고, 포커스 떠나면 감춤
            text=""  # 입력 필드 기본값 (선택 사항)
        )

        if ok:  # 사용자가 "확인" 버튼을 눌렀을 경우 → ok == True
            print("입력된 문자열: ", text_value)
        else:
            print("취소됨")
    
    def get_list(self):
        title = "리스트"
        label = "과일선택"
        
        self.items=["사과","바나나","오렌지","포도"]  
        list_value, ok = QInputDialog.getItem(self, title, label, self.items,
                                             current=0, editable=True) # 추가 가능, editable-False(추가안됨)
            
        print("입력항목  : ", ok, list_value)
        

app = QApplication([])
window = MainWindow()
window.show()
app.exec()

