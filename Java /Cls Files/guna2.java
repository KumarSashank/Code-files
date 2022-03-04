import java.util.Arrays;
import java.util.Scanner;

public class guna2 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        Arrays.sort(arr);
        System.out.print("Array after segregation is :[");
        for (int j = 0; j < n - 1; j++) {
            System.out.print(arr[j] + ",");
        }
        System.out.print(arr[n - 1] + "]");
        scn.close();
    }
}