import java.util.Scanner;

public class maxof3num {
    public static void main(String[] args) {
        int a, b, c;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the three numbers");
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        if (a > b && a > c)
            System.out.println("The largest number is:" + a);
        else if (b > a && b > c)
            System.out.println("The largest number is:" + b);
        else
            System.out.println("The largest number is:" + c);
        input.close();
    }
}
