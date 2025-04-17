# 5. 다음 Python 프로그램의 실행 결과를 작성하시오

class city:
    a=["Seoul", "Masan", "Pusan", "Incheon", "Daegu"]
my = city()
fchar = ""
for i in my.a:
    fchar = fchar + i[0]
print(fchar)