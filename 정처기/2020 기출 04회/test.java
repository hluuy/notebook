// 5. 다음 Java 프로그램은 십진수 10을 2진수로 변경하는 프로그램이다. 프로그램이 정상 동작하도록 빈칸에 들어갈 소스코드를 순서대로 작성하시오

public class Main {
    public  static void main(String[] args) throws Exception{
        int array[] = new int[8];
        int i = 0, n = 10;
        while ( (1) ){
            array[i++] = (2);
            n /= 2;
        }
        for(i = 7; i >= 0; i--){
            System.out.print(array[i]);
        }
    }
}

// 6. 다음 Java 프로그램과 실행 결과를 보고 킨반 (1), (2)에 들어갈 알맞은 배열 크기를 순서대로 작성하시오

public class Main {
    public static void main(String[] args) throws Exception {
        int[][] array = new int[(1)][(2)];
        int n = 1;
        for(int = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 5; j++){
                array[i][j] = j * 3 + (i + 1);
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}

<실행 결과>
1 4 7 10 13
2 5 8 11 14
3 6 9 12 15