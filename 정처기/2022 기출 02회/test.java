// 7. 다음 Java 프로그램의 실행 결과를 작성하시오

public class Main {
    public static void main(String[] args) throws Exception {
        int a = 3;
        int b = 1;
        switch(a) {
            case 1:
                b += 1;
            case 2:
                b++;
            case 3:
                b = 0;
            case 4:
                b += 3;
            case 5:
                b -= 10;
            default:
                b--;
        }
        System.out.print(b);
    }
}