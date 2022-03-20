import java.util.Scanner;

public class bank {

    private int balance = 0;

    public void deposit(int amount) {
        this.balance += amount;
    }

    public void withdraw(int amount) {
        this.balance -= amount;
    }

    public int getBalance() {
        return this.balance;
    }

    public static void main(String[] args) {
        System.out.println("Bank:\n");
        Scanner input = new Scanner(System.in);
        bank obj = new bank();
        int choice;
        do {
            System.out.println("1.Check Balance");
            System.out.println("2.Deposit");
            System.out.println("3.Withdraw");
            System.out.println("4.Exit");
            System.out.println("Enter your choice:");
            choice = input.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Your balance is: " + obj.getBalance());
                    break;
                case 2:
                    System.out.println("Enter amount to deposit:");
                    int amount = input.nextInt();
                    obj.deposit(amount);
                    System.out.println("Your balance is: " + obj.getBalance());
                    break;
                case 3:
                    System.out.println("Enter amount to withdraw:");
                    int amount1 = input.nextInt();
                    obj.withdraw(amount1);
                    System.out.println("Your balance is: " + obj.getBalance());
                    break;
                case 4:
                    System.out.println("Thank you for using our services");
                default:
                    System.out.println("Invalid choice");
                    break;
            }

        } while (choice != 4);
        input.close();
    }
}