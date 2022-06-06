
//Kumar Sashank AP20110010229  CSE-D
import java.util.Scanner;

interface A {
    default void sum() {
        System.out.println("Sum of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Sum is: " + (a + b));
    }

    default void Subtract() {
        System.out.println("Subtraction of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Subtract is: " + (a - b));
    }
}

interface B {
    default void Multiply() {
        System.out.println("Multiplication of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Multiply is: " + (a * b));
    }

    default void Divide() {
        System.out.println("Division of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Divide is: " + (a / b));
    }
}

interface C {
    default void Modulus() {
        System.out.println("Modulus of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Modulus is: " + (a % b));
    }

    default void Maximum() {
        System.out.println("Maximum of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Maximum is: " + (a > b ? a : b));
    }

    default void Minimum() {
        System.out.println("Minimum of 2 numbers");
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Minimum is: " + (a < b ? a : b));
    }
}

class AP20110010229 implements A, B, C {
    public static void main(String[] args) {
        System.out.println("Kumar Sashank AP20110010229\n");
        AP20110010229 obj = new AP20110010229();
        obj.sum();
        obj.Subtract();
        obj.Multiply();
        obj.Divide();
        obj.Modulus();
        obj.Maximum();
        obj.Minimum();
    }
}