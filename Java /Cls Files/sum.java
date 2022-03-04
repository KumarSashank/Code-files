import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        int a, b;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the Two numbers: ");
        a = input.nextInt();
        b = input.nextInt();
        sum obj = new sum();
        int c = obj.add(a, b);
        System.out.println("Sum is " + c);
        input.close();
    }

    int add(int a, int b) {
        return a + b;
    }
}
