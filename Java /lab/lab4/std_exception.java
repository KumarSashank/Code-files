//write a java program to catch or handle 3 different type of exceptions using try catch block
//Multiple Exceptions
public class std_exception {
    public static void main(String[] args) {
        int a, b, c;
        a = 10;
        b = 0;
        System.out.println("Program for Multiple Exception Handling");
        try {
            c = 10 / 0;
            System.out.println(c);
        } catch (Throwable e) {
            System.out.println(e);
        }
        int arr[] = { 3, 5, 9 };
        try {
            System.out.println(arr[7]);
        } catch (Throwable e) {
            System.out.println(e);
        }
        String str = null;
        try {
            System.out.println(str.toUpperCase());
        } catch (Throwable e) {
            System.out.println(e);
        }
    }
}
