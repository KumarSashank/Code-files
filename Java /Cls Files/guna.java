
import java.util.Scanner;

public class guna {

    class MainClass {

        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("How many rows you want in this patteran?");
            int rows = sc.nextInt();
            System.out.println("Here is your patteran.....!!!");
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j < i; j++) {
                    System.out.print(" ");
                }
                for (int j = i; j <= rows; j++) {
                    System.out.print(" ");
                }
                System.out.println();
            }
            System.out.println();
            for (

                    int i = rows - 1; i >= 1; i--) {
                for (int j = 1; j < i; j++) {
                    System.out.print(" ");
                }
                for (int j = 1; j <= rows; j++) {
                    System.out.println(" ");
                }
                System.out.println();
            }
            sc.close();
        }
    }
}
