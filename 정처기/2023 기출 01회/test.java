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

// 14. 다음은 버블 정렬을 하기 위한 Java 프로그램이다. (1), (2)에 들어갈 알맞은 코드를 작성하시오.
public class BubbleSort{
    public static void main(String[] args){
        int[] array = {64, 34, 25, 12, 22, 11, 90};
        bubbleSort( 1 );
        printArray(array);
    }

    public static void bubbleSort(int[] array){
        int n = array.length;

        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-1; j++){
                if(array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[( 2 )];
                    array[( 2 )] = temp;
                }
            }
        }
    }

    public static void printArray(int[] array){
        for (int value : array){
            System.out.print(value + " ");
        }
        System.out.println();
    }
}

// 17. 다음 Java 프로그램의 실행 결과를 작성하시오.

abstract class Transport {
    String modelName;
    abstract public String getModelName(String val);
    public String getModelName() {
        return "Model name: " + modelName;
    }
}

class Bicycle extends Transport {
    public Bicycle(String val){
        modelName = super.modelName = val;
    }
    public String getModelName(String val){
        return "Bicycle model: " + val;
    }
    public String getModelName(byte val[]){
        return "Bicycle model: " + val;
    }
}

public class YoungJin {
    public static void main(String[] args){
        Transport obj = new Bicycle("Mountain Bike");
        System.out.println(obj.getModelName());
    }
}

// 20. 다음의 Java 프로그램의 실행 결과를 작성하시오

class Mother {
    int y = 1;
    Mother(){
        this(2);
    }
    Mother(int y) {
        this.y = y;
    }
    int getY() {
        return y;
    }
}

class Daughter extends Mother {
    int y = 3;
    Daughter() {
        this(4);
    }
    Daughter(int y) {
        this.y = y;
    }
}

public class YoungJin {
    public static void main(String[] args){
        Daughter daughterObj = new Daughter();
        System.out.println(daughterObj.getY());
    }
}