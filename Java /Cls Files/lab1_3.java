import java.util.Scanner;

public class lab1_3 {
    public static void main(String[] args) {
        int a;
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter a number: ");
        a = obj.nextInt();
        if (a % 2 == 0) {
            System.out.println("Even");
        } else {
            System.out.println("Odd");
        }
    }
}