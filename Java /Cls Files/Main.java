class MyBaseClass extends Exception {
}

class MyDerivedclass extends MyBaseClass {
}

public class Main {
    public static void main(String args[]) {
        try {
            throw new MyDerivedclass();
        } catch (MyBaseClass b) {
            System.out.println("Caught base class exception");
        } catch (MyDerivedclass d) {
            System.out.println("Caught derived class exception");
        }
    }
}