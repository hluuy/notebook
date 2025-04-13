// 8. 다음 C언어 프로그램의 실행 결과를 작성하시오

struct nums {
    int n;
    int g;
};
int main() {
    struct nums a[2];
    for(int i = 0; i < 2; i++){
        a[i].n = i;
        a[i].g = i + 1;
    }
    printf("%d", a[0].n + a[1].g);
    return 0;
}

// 15. 다음 C언어 프로그램의 실행 결과를 작성하시오

int len(char*p);
int main(){
    char* ps1 = "1234";
    char* ps2 = "123456";
    int a1 = ps1;
    int a2 = ps2;
    printf("%d", len(a1) + len(a2));
    return 0;
}
int len(char* p){
    int r = 0;
    while(*p != '\0'){
        p++;
        r++;
    }
    return r;
}

// 16. 다음 C언어 프로그램의 실행 결과를 작성하시오

int main(){
    int arr1[4] = {0, 2, 4, 8};
    int arr2[3] = {};
    int *p, i, sum = 0;
    for(i = 1; i < 4; i++){
        p = arr1 + i;
        arr2[i-1] = *p - arr1[i-1];
        sum = sum + arr2[i-1] + arr1[i];
    }
    printf("%d", sum);
    return 0;
}