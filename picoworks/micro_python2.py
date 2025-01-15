# 함수
def test_func(x=1, y=2):
    print(x)
    print(y)
    
test_func(x=100)
print()
test_func(y=100)

def test_func2(x, y):
    return x + y, x - y

result = test_func2(10, 20)
print(type(result), result) # 튜플

for item in result:
    print(type(item), item)
    
xy_plus, xy_minus = test_func2(10, 20)
print(type(xy_plus), xy_plus)
print(type(xy_minus), xy_minus)