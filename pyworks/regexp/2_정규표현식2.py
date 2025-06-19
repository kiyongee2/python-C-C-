import re

# 그룹 - 소괄호()
phone = "jang 010-1234-5678"
pat = re.compile("(\w+)\s{1,2}(010-\d{3,4}-\d{4})")
mat = pat.match(phone)
print(mat.group())
print(mat.group(1)) #jang
print(mat.group(2)) #010-1234-5678

# 폰번호 뒷 4자리 마스킹 처리
pattern = re.compile("(\w+)\s{1,2}(010-\d{3,4})-\d{4}")

print(pattern.sub("\g<1>", phone)) #jang
print(pattern.sub("\g<2>-****", phone)) #010-1234-****

# 주민등록번호 마스킹 처리
data = """
kim 920815-1234567
lee 031011-4123456
"""

'''
pat = re.compile("(\d{6})[-]\d{7}")
print(pat.sub("\g<1>-*******", data))

pat2 = re.compile("(\d{6}[-]\d{1})\d{6}")
print(pat2.sub("\g<1>******", data))
'''

def masked_resident_number(number):
    pat = re.compile(r"(\d{6}-\d{1})\d{6}")
    return pat.sub("\g<1>-*******", data)

print(masked_resident_number(data))

'''
# 정규식 패턴 개선 (공백과 줄바꿈 고려)
pat = re.compile(r"(\d{6}-\d{1})\d{6}")  # 앞 7자리 캡처, 뒤 6자리 마스킹
# mat = pat.match(data)
# print(mat.group(1))

# 마스킹 처리 함수
def mask_resident_number(match):
    return match.group(1) + "******"

# 결과 출력
masked_data = pat.sub(mask_resident_number, data)
print(masked_data)
'''