// 1. 다음 Java 프로그램의 실행 결과를 작성하시오

class Static {
    public int a = 20;
    static int b = 0;
}

public class Main{
    public static void main(String[] args){
        int a;
        a = 10;
        Static.b = a;
        Static st = new Static();

        System.out.println(Static.b++);
        Ststem.out.println(st.b);
        System.out.println(a);
        System.ouy.println(st.a);
    }
}