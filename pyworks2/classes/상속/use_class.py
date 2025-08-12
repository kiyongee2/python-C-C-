from my_lib.my_class import ScaleConverter

class Converter(ScaleConverter):
  def __init__(self, units_from, units_to, factor, offset):
    super().__init__(units_from, units_to, factor)
    self.offset = offset
    
  def convert(self, value):
    return super().convert(value) + self.offset
  
con1 = Converter('C', 'F', 1.8, 32)
print(f"{con1.convert(23)} {con1.units_to}")