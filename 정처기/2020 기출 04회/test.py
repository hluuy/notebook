# 9. 다음 Python 프로그램의 실행 결과를 출력 형식을 준수하여 작성하시오

arr = [[1, 2, 3], [4, 5], [6, 7, 8, 9]]
print(arr[0])
print(arr[2][1])
for sub in arr:
    for item in sub:
        print(item, end=" ")
    print()