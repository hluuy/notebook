// 4. 다음 C언어 프로그램의 실행 결과를 작성하시오

public class Main{
    public static void main(String[] args){
        int[] rank = new int[5];
        int[] array = {77, 32, 10,99, 50};
        for(int x = 0; x < 5; x++){
            rank[x] = 1;
            for(int y = 0; y < 5; y++) {
                if(array[x] < array[y]) rank[x]++;
            }
        }
        for(int x = 0; x < 5; x++){
            System.out.print(rank[x]);
        }
    }
}

// 19. 다음 Java 프로그램의 실행 결과를 작성하시오.
public class Main {
    static int size = 4;
    public static void main(String[] args) throws Exception {
        int[] arr = new int[size];
        Array(arr);
        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
    }
    public static void Array(int[] arr) {
        for(int i = 0; i < size; i++){
            arr[i] = i;
        }
    }
}

// 20. 다음 Java 프로그램의 실행 결과를 작성하시오

public class Main {
    public static void main(String[]args) throws Exception {
        int a = 0;
        for(int i = 1; i < 999; i++){
            if(i % 3 == 0 && i % 2 !=0)
            a = i;
        }
        System.out.print(a);
    }
}