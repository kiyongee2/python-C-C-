import re

pat = re.compile("[a-z]+") #정규 표현식
mat = pat.match("korea")   #조사할 문자열
print(bool(mat))
# print(mat)
# print(mat.start())
# print(mat.end())
# print(mat.group())

if mat:
    print('문자열 있음: ', mat.group())
else:
    print('문자열 없음')
 
# *은 0개이상, +는 1개 이상 
pat = re.compile("a+b") #정규 표현식
mat = pat.match("b")   #조사할 문자열
# print(mat)
if mat:
    print('문자열 있음: ', mat.group())
else:
    print('문자열 없음')
    
# 전화번호 검증
# phone_pat = re.compile('010-\d{3,4}-\d{4}')
phone_pat = re.compile("010-[0-9]{3,4}-[0-9]{4}")
mat = phone_pat.match("010-12355-5678")
print(bool(mat)) 
    
# 한글과 전화번호 패턴 검사
name_pat = "제갈수연동우";
pat = re.compile("[가-힣]{2,5}")
mat = pat.fullmatch(name_pat)
print(bool(mat))
    
# 한글이름 패턴 유효성 검사
def validate_name(user_name):
    pattern = re.compile("^[가-힣]{2,5}$")
    return bool(pattern.fullmatch(user_name))

while True:
    user_name = input("한글 이름 입력(2~5자): ")

    if validate_name(user_name):
        print(f"이름: {user_name}")
        break
    else:
        print("올바른 한글 이름이 아닙니다. 다시 입력하세요")
        