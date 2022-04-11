package lab6;

interface kumarsashank {
    void m1();

    void m2();
}

class AP20110010229 implements kumarsashank {
    public void m1() {
        System.out.println("m1");
    }

    public void m2() {
        System.out.println("m2");
    }
}

public class interfaces {
    public static void main(String[] args) {
        kumarsashank obj = new AP20110010229();
        obj.m1();
        obj.m2();
    }
}
