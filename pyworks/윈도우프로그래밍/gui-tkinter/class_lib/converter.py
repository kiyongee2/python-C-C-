# 단위 변환기
class Converter:
    def __init__(self, units_from, units_to, factor):
        self.units_from = units_from
        self.units_to = units_to
        self.factor = factor
        
    def convert(self, value):
        return self.factor * value

if __name__ == "__main__":
    # 메가바이트를 킬로바이트로 변환 : 1MB = 1024KB
    con1 = Converter('MB', 'KB', 1024)
    print(f'1MB = {con1.convert(1)}KB')
    print(f'10MB = {con1.convert(10):,}KB')
    
    # 인치를 cm로 변환 - 1인치 = 2.54cm
    con2 = Converter('inch', 'cm', 2.54)
    print(f'1inch = {con2.convert(1)}cm')
    print(f'10inch = {con2.convert(10)}cm')
    
    