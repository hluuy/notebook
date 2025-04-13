// 1. 다음 C언어 프로그램의 출력 결과를 2차원 배열의 형태로 <답란>에 작성하시오

int check();
int main(){
    int mines[4][4] = {{0,1,0,1},{0,0,0,1},{1,1,1,0},{0,1,1,1,}};
    int field[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int w = 4, h = 4, y, x, i, j;
    for(y=0; y<h; y++){
        for(x=0; x<w; x++){
            if(mines[y][x]==0) continue;
            for(i=y-1; i<=y+1; i++){
                for(j=x-1; j<=x+1; j++){
                    if(check(w,h,i,j) == 1){
                        field[i][j] += 1;
                    }
                }
            }
        }
    }
    for(y=0; y<h; y++){
        for(x=0; x<w; x++)
            printf("%d", field[y][x]);
        printf("\n");
    }
}
int check(int w, int h, int j, int i){
    if(i>=0 && i < h && j >= 0 && j < w) return 1;
    return 0;
}

// 13. 다음 C언어 프로그램의 실행 결과를 작성하시오.

int main(){
    int num1, num2, num3, p_num = 0;
    for(num1 = 6; num1 <= 30; num1++){
        num2 = num1/2;
        num3 = 0;
        for(int i = 1; i <= num2; i++){
            if(num1%i==0){
                num3=num3+i;
            }
        }
        if(num1==num3){
            p_num++;
        }
    }
    printf("%d", p_num);
    return 0;
}