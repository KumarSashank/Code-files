import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        System.out.println("Simple Calculator");

        System.out.println("Enter two numbers");

        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = input.nextInt();
        System.out.print("Enter second number: ");
        int num2 = input.nextInt();

        System.out.println("Choose an operation");

        System.out.println("1. Add");
        System.out.println("2. Subtract");
        System.out.println("3. Multiply");
        System.out.println("4. Divide");
        System.out.println("5. Exit");

        System.out.print("Enter your choice: ");
        int choice = input.nextInt();

        switch (choice) {
            case 1:
                int ans = num1 + num2;
                System.out.println("The Addition is: " + ans);
                break;
            case 2:
                int ans1 = num1 - num2;
                System.out.println("The Subtraction is: " + ans1);
                break;
            case 3:
                int ans2 = num1 * num2;
                System.out.println("The Multiplication is: " + ans2);
                break;
            case 4:
                double ans3 = (double) num1 / num2;
                System.out.println("The Division is: " + ans3);
                break;
            case 5:
                System.out.println("Exiting...");
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
        input.close();
    }
}
