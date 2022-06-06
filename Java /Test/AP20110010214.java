import java.util.Scanner;

class Addition {
    int Addition(int a, int b) {
        return a + b;
    }
}

class Subtraction extends Addition {
    int Subtraction(int a, int b) {
        return a - b;
    }
}

class Multiplication extends Subtraction {
    int Multiplication(int a, int b) {
        return a * b;
    }
}

class Divide extends Multiplication {
    int Divide(int a, int b) {
        return a / b;
    }
}

class Modulo extends Divide {
    int Modulo(int a, int b) {
        return a % b;
    }
}

class AP20110010214 {
    public static void main(String[] args) {
        Addition obj = new Addition();
        Subtraction obj1 = new Subtraction();
        Multiplication obj2 = new Multiplication();
        Divide obj3 = new Divide();
        Modulo obj4 = new Modulo();
        Scanner input = new Scanner(System.in);
        int a, b;
        System.out.println("Enter A and B: ");
        a = input.nextInt();
        b = input.nextInt();
        System.out.println("Addition is: " + obj.Addition(a, b));
        System.out.println("Subtraction is: " + obj1.Subtraction(a, b));
        System.out.println("Multiplication is: " + obj2.Multiplication(a, b));
        System.out.println("Division is: " + obj3.Divide(a, b));
        System.out.println("Modulo is: " + obj4.Modulo(a, b));

    }
}