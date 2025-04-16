// 4. 다음 Java 프로그램의 실행 결과를 작성하시오

class A {
    int a;
    int b;
}
public class Main {
    static void func1(A m){
        m.a *= 10;
    }
    static void func2(A m){
        m.a += m.b;
    }
    public static void main(String[] args) throws Exception {
        A m = new A();
        m.a = 100;
        func1(m);
        m.b = m.a;
        func2(m);
        System.out.printf("%d", m.a);
    }
}

// 11. 다음 Java 프로그램의 실행 결과를 보고 빈칸에 들어갈 알맞은 코드를 작성하시오

class Car implements Runnable {
    int a;
    public void run(){
        System.out.println("lamborghini");
    }
}
public class Main(){
    public static void main(String[] args) throws Exception {
        Thread car1 = new Thread(new ( 빈칸 ) ());
        car1.start();
    }
}

<출력>
lamborghini