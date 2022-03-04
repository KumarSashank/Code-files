import java.util.Scanner;

public class number_checking {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = input.nextInt();
        if (a > 1 && a < 10) {
            System.out.println("a is between 1 and 10");
        } else {
            System.out.println("a is not between 1 and 10");
        }
        input.close();
    }
}