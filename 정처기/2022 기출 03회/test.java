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