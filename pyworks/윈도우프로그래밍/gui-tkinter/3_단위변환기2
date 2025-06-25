from tkinter import *
from tkinter import messagebox

# 단위 변환기 클래스
class Converter:
    def __init__(self, units_from, units_to, factor):
        self.units_from = units_from
        self.units_to = units_to
        self.factor = factor
        
    def convert(self, value):
        return self.factor * value

# 변환기 GUI 애플리케이션
class App:
    def __init__(self, root):
        self.root = root
        self.root.title("단위 변환기")
        self.root.geometry("300x150")
        
        # 변환기 인스턴스 생성 (기본값: MB → KB)
        self.converter = Converter('MB', 'KB', 1024)
        
        # 변환 유형 선택 프레임
        self.setup_conversion_frame()
        
        # 입력/출력 프레임
        self.setup_io_frame()
        
        # 버튼 프레임
        self.setup_button_frame()
    
    def setup_conversion_frame(self):
        frame = Frame(self.root)
        frame.pack(pady=5)
        
        Label(frame, text="변환 유형:").pack(side=LEFT)
        
        self.conversion_type = StringVar(value="MB_KB")
        OptionMenu(frame, self.conversion_type, 
                 "MB_KB", "KB_MB", "INCH_CM", "CM_INCH",
                 command=self.change_converter).pack(side=LEFT)
    
    def setup_io_frame(self):
        frame = Frame(self.root)
        frame.pack(pady=5)
        
        # 입력 필드
        Label(frame, text="변환할 값:").grid(row=0, column=0, sticky=E)
        self.input_value = DoubleVar()
        Entry(frame, textvariable=self.input_value, width=15).grid(row=0, column=1)
        
        # 결과 필드
        Label(frame, text="변환 결과:").grid(row=1, column=0, sticky=E)
        self.result_value = StringVar()
        Label(frame, textvariable=self.result_value, width=15, relief="sunken").grid(row=1, column=1)
    
    def setup_button_frame(self):
        frame = Frame(self.root)
        frame.pack(pady=5)
        
        Button(frame, text="변환", command=self.convert, width=10).pack(side=LEFT, padx=5)
        Button(frame, text="초기화", command=self.reset, width=10).pack(side=LEFT, padx=5)
    
    def change_converter(self, selection):
        """변환 유형에 따라 변환기 설정 변경"""
        converters = {
            "MB_KB": Converter('MB', 'KB', 1024),
            "KB_MB": Converter('KB', 'MB', 1/1024),
            "INCH_CM": Converter('inch', 'cm', 2.54),
            "CM_INCH": Converter('cm', 'inch', 1/2.54)
        }
        self.converter = converters[selection]
    
    def convert(self):
        """변환 수행"""
        try:
            value = self.input_value.get()
            if value < 0:
                messagebox.showerror("오류", "양수를 입력해주세요.")
                return
                
            result = self.converter.convert(value)
            self.result_value.set(f"{result:,.2f} {self.converter.units_to}")
        except TclError:
            messagebox.showerror("오류", "유효한 숫자를 입력해주세요.")
            self.result_value.set("오류!")
    
    def reset(self):
        """입력값과 결과 초기화"""
        self.input_value.set(0)
        self.result_value.set("")

if __name__ == "__main__":
    root = Tk()
    app = App(root)
    root.mainloop()