# 팝업 대화 상자

from datetime import datetime
from PyQt6.QtWidgets import QApplication, QMainWindow, QWidget, \
QPushButton, QMessageBox, QVBoxLayout

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("QMessageBox 예제")
        self.setGeometry(300, 300, 250, 150)
        
        self.button1 = QPushButton("메세지 창 띄우기")
        self.button1.clicked.connect(self.showInfomtaionMessage)
        
        self.button2 = QPushButton("질문 창 띄우기")
        self.button2.clicked.connect(self.showQuestionMessage)
        
        self.button3 = QPushButton("경고창 띄우기")
        self.button3.clicked.connect(self.showCriticalMessage)
        
        layout = QVBoxLayout()
        layout.addWidget(self.button1)
        layout.addWidget(self.button2)
        layout.addWidget(self.button3)
        
        container = QWidget()
        container.setLayout(layout)
        self.setCentralWidget(container)
        
    def showInfomtaionMessage(self):
        current_date = datetime.now()
        QMessageBox.information(self, "날짜출력", f"오늘은 {current_date}입니다.")
        
    def showQuestionMessage(self):
        button = QMessageBox.question(self, "파일저장", "저장할까요 ?")
        if button == QMessageBox.StandardButton.Yes:
            print("Yes!")
        else:
            print("No !")
    
    def showCriticalMessage(self):
        button = QMessageBox.critical(
                self,
                "경고",
                "내용을 잘 확인하세요!!",
                QMessageBox.StandardButton.Ok |
                QMessageBox.StandardButton.Cancel,
                # 버튼 기본값은 Ok , 디폴트 버튼 변경가능
                #defaultButton=QMessageBox.StandardButton.Cancel
                )
        if button == QMessageBox.StandardButton.Ok:
            print("OK 선택!")
        elif button == QMessageBox.StandardButton.Cancel:
            print("Cancel 선택!")
            
    def closeEvent(self, event):
        # 종료 확인 메시지 박스 생성
        reply = QMessageBox.question(self, "종료 확인", "정말 종료하시겠습니까?",
                    QMessageBox.StandardButton.Yes | QMessageBox.StandardButton.No)

        # 사용자가 "Yes"를 선택하면 종료, 아니면 취소
        if reply == QMessageBox.StandardButton.Yes:
            QApplication.quit()   # app 종료
        else:
            event.ignore()  # 창 닫기 취소
        
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()