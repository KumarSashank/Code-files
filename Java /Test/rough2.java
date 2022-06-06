class hola{
    int addition(int a, int b) {
        return a + b;
    }
    double addition(double a, double b) {
        return a + b;
    }
}

public class rough2 {
    public static void main(String[] args) {
        hola h = new hola();
        System.out.println(h.addition(4,3));
        System.out.println(h.addition(4.5,3.5));
    }
}
