import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = input.nextLine();
        // check palindrome
        int len = str.length();
        int i = 0;
        int j = len - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                System.out.println("Not a palindrome");
                break;
            }
            i++;
            j--;
        }
    }
}
