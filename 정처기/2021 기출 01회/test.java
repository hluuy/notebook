// 7. 다음 Java 프로그램의 실행 결과를 작성하시오

public class Main {
    public static void main(String[] args) throws Exception {
        int array[][] = {{15, 17, 19}, {25}};
        System.out.println(array[0].length);
        System.out.println(array[1].length);
        System.out.println(array[0][0]);
        System.out.println(array[0][1]);
        System.out.println(array[1][0]);
    }
}

// 18. 다음 Java 프로그램의 실행 결과를 작성하시오

public class Main {
    public static void main(String[] args) throws Exception {
        int sum, cnt;
        for(cnt = 0, sum = 0; cnt <= 5; cnt++){
            sum += cnt;
            System.out.print(cnt)
            if(cnt == 5){
                System.out.print("=");
                System.out.print(sum);
            }
            else{
                System.out.print("+");
            }
        }
    }
}