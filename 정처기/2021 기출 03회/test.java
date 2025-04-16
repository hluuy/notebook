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