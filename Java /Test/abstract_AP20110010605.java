import java.util.Scanner;

abstract class AP20110010605 {

    public String SBI = "AP20110010605";
    public String BankName = "SBI";

    public void details() {
        System.out.println("SBI: " + SBI);
        System.out.println("Bank Name: " + BankName);
    }

    abstract void deposit(int amount);

    abstract void withdraw(int amount);

    abstract void balancecheck();
}

class AP20110010605_1 extends AP20110010605 {
    private int balance = 0;

    public void deposit(int amount) {
        this.balance += amount;
    }

    public void withdraw(int amount) {
        if (amount <= this.balance) {
            System.out.println(amount + " is withdrawn");
            this.balance = this.balance - amount;
        } else {
            System.out.println("Insufficient Money");
        }
    }

    public int getBalance() {
        return this.balance;
    }

    public void balancecheck() {
        System.out.println("Your balance is: " + this.balance);
    }
}

public class abstract_AP20110010605 {

    public static void main(String[] args) {
        System.out.println("Bank:\n");
        Scanner input = new Scanner(System.in);
        AP20110010605_1 obj = new AP20110010605_1();
        int choice;
        do {
            System.out.println("1.Check Balance");
            System.out.println("2.Deposit");
            System.out.println("3.Withdraw");
            System.out.println("4.Details");
            System.out.println("5.Exit");
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
                    obj.details();
                    break;
                case 5:
                    System.out.println("Thank you for using our services");
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }

        } while (choice != 5);
        input.close();
    }
}