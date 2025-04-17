// 17. 다음 Java 프로그램이 정상 동작하여 <실행 결과>가 출력될 수 있도록 빈칸에 알맞은 예약어를 작성하시오

public class Main {
    public static void main(String[] args) throws Exception{
        System.out.println(test(1));
    }
    ( ) String test(int num){
        return(num >= 0) ? "positive" : "negative";
    }
}

<실행 결과>
positive

// 19. 다음 Java 프로그램의 실행 결과를 작성하시오

class par{
    int comp(int x, int y){
        return x + y;
    }
}
class sub extends par{
    int comp(int x, int y){
        return x - y + super.comp(x, y);
    }
}
public class Main{
    public static void main(String[] args) throws Exception{
        par aa = new par();
        par bb = new sub();
        System.out.println(aa.comp(3, 2) + bb.comp(3, 2));
    }
}