public class cls1 {
    public static void main(String[] args) {
        int a, b, c;
        a = 10;
        b = 0;
        try {
            c = 10 / 0;
            System.out.println(c);
        } catch (Throwable e) {
            System.out.println(e);
            System.out.println("Throwable working");
        }
        String a = null;
        System.out.println(a);
        // System.out.println(a,UpperCase);

    }
}
