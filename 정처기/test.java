// 2023 기출문제 03회
// 1번 다음 JAVA 프로그램의 실행 결과를 작성하시오.
class sup {
    public void paint() {
        System.out.print("A");
        draw();
    }
    public void draw() {
        System.out.print("B");
        draw();
    }
}
class sub extends sup {
    public void paint(){
        super.draw();
        System.out.print("C");
        this.draw();
    }
    public void draw(){
        System.out.print("D");
    }
}
public class Youngjin {
    public static void main(String[] args) throws Exception {
        sup youngjin = new sub();
        youngjin.paint();
        youngjin.draw();
    }
}