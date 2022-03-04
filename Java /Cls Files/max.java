import java.util.Scanner;

public class max {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size: ");
        int size = input.nextInt();
        int[] arr = new int[size];
        int temp = 0;
        System.out.println("Enter the number of elements: ");
        for (int i = 0; i < size; i++) {

            arr[i] = input.nextInt();
            if (temp < arr[i]) {
                temp = arr[i];
            }
        }
        System.out.println("The maximum number is " + temp);
        input.close();
    }
}
