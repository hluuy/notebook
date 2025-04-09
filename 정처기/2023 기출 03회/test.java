// 2023 기출문제 03회

// 1. 다음 JAVA 프로그램의 실행 결과를 작성하시오.
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

// 12. 다음 Java 프로그램의 오류가 발생하는 line과 이유를 작성하시오.
class Individual{
    public String fullName;
    public Individual(String value){
        fullName = value;
    }
    public static String getFullName(){
        return fullName;
    }
    public void displayFullName(){
        System.out.println(fullName);
    }
}
public class Main {
    public static void main(String[] args){
        Individual personObject = new Individual("Lee");
        personObject.displayFullName();
    }
}

// 14. 다음의 Java 프로그램의 실행 결과를 작성하시오.
class Mother {
    int calculate(int number) {
        if(number <= 1)
            return number;
        return calculate(number - 1) + calculate(number - 2);
    }
}
class Daughter extends Mother {
    int calculate(int number) {
        if(number <= 1)
            return number;
        return calculate(number - 1) + calculate(number - 3);
    }
}

public class Main {
    public static void main(String[] args) {
        Mother parentObject = new Daughter();
        System.out.pring(parentObject.calculate(7));
    }
}
