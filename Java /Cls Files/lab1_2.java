import java.util.Scanner;

class lab1_2 {
    public static void main(String args[]) {
        int a, b, c;

        System.out.print("Enter a number: ");
        Scanner obj = new Scanner(System.in);
        a = obj.nextInt();
        b = obj.nextInt();

        c = a + b;
        System.out.println("Sum is " + c);
    }
}