import java.util.Scanner;

public class day3_1 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a = input.nextInt();
        System.out.print("Number to count : ");
        int b = input.nextInt();
        int count = 0;
        while (a > 0) {
            int remainder = a % 10;
            if (remainder == b) {
                count++;
            }
            a = a / 10;
        }
        System.out.println("Number of occurences of " + b + " is " + count);
    }
}
