// 14. 다음 C언어 프로그램의 실행 결과를 작성하시오

int func(int a) {
    if(a <= 1) return 1;
    return a * func(a-1);
}
int main() {
    int a;
    scanf("%d", &a); // 5를 입력
    printf("%d", func(a));
}

// 15. 다음 C언어 프로그램은 변수 number의 값 1234를 역순으로 출력하는 프로그램이다. (1), (2), (3)에 들어갈 알맞은 연산자를 작성하시오

int main(){
    int number = 1234;
    int divider = 10;
    int result = 0;
    while (number (1) 0){
        result = result * divider;
        result = result + number (2) divider;
        number = number (3) divider;
    }
    printf("%d", result);
}

// 19. 다음 C언어 프로그램의 실행 결과를 작성하시오.

int isPrime(int number) {
    int i;
    for(i = 2; i < number; i++){
        if(number % i ==0)
        return 0;
    }
    return 1;
}
int main(void){
    int number = 13195, max_div=0, i;
    for(i = 2; i < number; i++)
    if(isPrime(i) == 1 && number % i == 0)
        max_div = i;
    printf("%d", max_div);
    return 0;
}