# 7. 다음 Python 프로그램의 실행 결과를 작성하시오

a = 100
result = 0
for i in range(1, 3):
    result = a >> i
    result = result + 1
print(result)