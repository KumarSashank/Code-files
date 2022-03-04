import java.util.Scanner;

public class max1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int temp = 0;
        System.out.println("Enter the 3 elements: ");
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        if (a > b && a > c) {
            temp = a;
        } else if (b > a && b > c) {
            temp = b;
        } else {
            temp = c;
        }
        System.out.println("The maximum number is " + temp);
        input.close();
    }
}
