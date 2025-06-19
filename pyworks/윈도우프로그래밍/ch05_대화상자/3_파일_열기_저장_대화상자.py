# 파일 열기/저장 대화상자

from PyQt6.QtWidgets import QApplication, QMainWindow, \
                    QFileDialog, QPushButton, QVBoxLayout, \
                    QWidget, QTextEdit
                            
class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        
        self.setWindowTitle("My App")
        self.setGeometry(300,300,300,150)
        
        layout = QVBoxLayout()
        
        button1 = QPushButton("Open file")
        button1.clicked.connect(self.get_filename)
        layout.addWidget(button1)
        
        # 파일 로드하여 오픈한 파일내용 QTextEdit(multi line)에 로드한다
        self.textedit = QTextEdit(self)  
        layout.addWidget(self.textedit)
        
        button2 = QPushButton("Save file")
        button2.clicked.connect(self.get_save_filename)
        layout.addWidget(button2)
        
        container = QWidget()
        container.setLayout(layout)
    
        self.setCentralWidget(container)
    
    # 하나 파일 열기
    def get_filename(self):
        filters = "image files (*.png | *.ico);; comma separated Values (*.csv) ;; \
                   text files (*.txt);; All files (*)"
        # 파일명, 필터
        filename, _ = QFileDialog.getOpenFileName(self, 
                                               caption="Select a File", # 대화 상자 제목
                                               directory = "",              # 초기 디렉토리     
                                               filter=filters,         # 필터 설정
                                               initialFilter="All files (*)"  #디폴트 필터
                                               )
        print("result: ", filename)
        
        if not filename:  # 사용자가 파일 선택을 취소한 경우
            print("파일 선택이 취소되었습니다.")
            return
        
        with open(filename, "r", encoding="utf-8") as f:  # 파일 열기
            file_content = f.read()  # 파일 내용 읽기, 전체내용 문자열로 가져옴
            
        self.textedit.setText(file_content)
        
    
    # 파일 저장 창
    def get_save_filename(self):
        filters = "image files (*.png | *.ico);; \
                   text files (*.txt);; All files (*)"
        filename, _ = QFileDialog.getSaveFileName(self, 
                                               caption="Select a File", # 대화 상자 제목
                                               directory = "",          # 초기 디렉토리     
                                               filter=filters,          # 필터 설정
                                               initialFilter="All files (*)"  #디폴트 필터
                                              )
        print("result: ", filename)
        
        if not filename:  # 사용자가 취소를 누른 경우
            return
        
        # 파일 저장   
        with open(filename, "w", encoding="utf-8") as f:
            file_content = self.textedit.toPlainText()
            f.write(file_content)   
        print("파일저장 !!")
        
app = QApplication([])
window = MainWindow()
window.show()
app.exec()
