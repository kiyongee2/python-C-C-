# 사원 정보

from PyQt6.QtWidgets import QApplication, QMainWindow, QMessageBox, QTableWidgetItem
from PyQt6 import uic
from PyQt6.QtGui import QIntValidator

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        # uic.loadUi()를 사용하여 qt_desi_1.ui 파일을
        # MainWindow 객체 (self)에 로드.
        uic.loadUi("ex03.ui", self)
        
        self.cbo_dept.addItems(["영업부", "정보부", "인사부",
            "생산1부", "생산2부"]) # 여러 개 추가

        #버튼연결
        self.pushButton_ok.clicked.connect(self.button_ok)
        self.pushButton_cancel.clicked.connect(self.button_cancel)
        self.in_name.setFocus()
        
        self.in_salary.setValidator(QIntValidator(0, 9999999))
        
    def button_ok(self):
        if self.in_name.text() == "" or self.in_salary.text() == "":
            QMessageBox.information(self, "입력오류", "성명과 월급은 반드시 입력!!")
            return
        
        # TableWidget에 새 행 추가
        row_position = self.tableWidget.rowCount()
        self.tableWidget.insertRow(row_position)
        self.tableWidget.setItem(row_position, 0, QTableWidgetItem(self.in_name.text())) # 이름
        self.tableWidget.setItem(row_position, 1, QTableWidgetItem(self.cbo_dept.currentText())) #부서
        self.tableWidget.setItem(row_position, 2, QTableWidgetItem(self.in_salary.text())) # 월급
    
        self.button_cancel()
    
    def button_cancel(self):
        self.in_name.clear()
        self.cbo_dept.setCurrentIndex(0)
        self.in_salary.clear()

        
       
# 실행 코드
app = QApplication([])
window = MainWindow()
window.show()
app.exec()