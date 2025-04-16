// 1. 다음 Java 프로그램의 실행 결과를 작성하시오

class Singleton{
    private static Singleton inst = null;
    private int count = 0;
    static public Singleton get(){
        if(inst == null){
            inst = new Singleton();
            return inst;
        }
        return inst;
    }
    public void count(){
        count++;
    }
    public int getCount(){
        return count;
    }
}
public class Main{
    public static void main(String[] args) throws Exception{
        Singleton conn1 = Singleton.get();
        conn1.count();
        Singleton conn2 = Singleton.get();
        conn2.count();
        Singleton conn3 = Singleton.get();
        conn3.count();
        System.out.print(conn1.getCount());
    }
}

// 11. 다음 Java 프로그램의 실행 결과를 작성하시오

public class Main{
    public static void main(String[] args) throws Exception{
        int a = 3, b = 4, c = 3, d = 5;
        if((a == 2 | a == c) & !(c > d) & (1 == b ^ c != d)){
            a = b + c;
            if(7 == b ^ c != a){
                System.out.println(a);
            }
            else{
                System.out.println(b);
            }
        }
        else {
            a = c + d;
            if(7 == c ^ d != a){
                System.out.println(a);
            }
            else{
                System.out.println(d);
            }
        }
    }
}