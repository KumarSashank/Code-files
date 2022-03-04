import java.util.Scanner;

public class add {

    static int sum(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter two numbers: \n");
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int ans = sum(num1, num2);
        System.out.println("The Addition is: " + ans);
        input.close();

    }
}
