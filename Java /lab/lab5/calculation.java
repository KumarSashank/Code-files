public class calculation {
    public static void main(String[] args) {
        System.out.println("Showing Calcualtion exception:");
        System.out.println("Division of 2 numbers");
        int a = 53, b = 0;
        System.out.println(a + "/" + b + "= It is not defined");

        try {
            System.out.println("Division of " + a + " and " + b + " is " + (a / b));
        } catch (ArithmeticException e) {
            System.out.println("Exception occured: " + e);
        }
    }
}