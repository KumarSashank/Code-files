public class finally_lab {
    public static void main(String[] args) {
        System.out.println("Here showing use of finally");
        System.out.println("Division of 2 numbers");
        int a = 53, b = 0;
        System.out.println(a + "/" + b + "= It is not defined");

        try {
            System.out.println("Division of " + a + " and " + b + " is " + (a / b));
        } catch (ArithmeticException e) {
            System.out.println("Exception occured: " + e);
        } finally {
            System.out.println("Even we got exception, we are still here");
        }
    }
}
