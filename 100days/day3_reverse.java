import java.util.Scanner;

public class day3_reverse {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int n = a;
        int ans = 0;
        while (n > 0) {
            int remainder = n % 10;
            ans = ans * 10 + remainder;
            n = n / 10;
        }
        System.out.println(ans);
    }
}
