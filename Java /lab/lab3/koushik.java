import java.util.Scanner;

abstract class Bank1 {
    public String Name = "My Bank";
    public String IFSC = "My Bank123";

    public void Details() {
        System.out.println("Bank Name: " + Name);
        System.out.println("Bank IFSC code: " + IFSC);
    }

    abstract void Deposit(int balance);

    abstract void withdraw();

    abstract void Balancecheck();
}

class bankservices extends koushik {
    private int amount;

    public void Deposit(int balance) {
        this.amount = this.amount + balance;
    }

    public void withdraw(int money) {
        if (money <= this.amount) {
            System.out.println(money + " is withdrawn");
            this.amount = this.amount - money;
        } else {
            System.out.println("Insufficient Money");
        }
    }

    public void Balancecheck() {
        System.out.println("Your Amount is: " + this.amount);
    }
}

public class koushik {
    public static void main(String[] args) {
        bankservices b1 = new bankservices();
        b1.Deposit(10000);
        b1.withdraw(5000);
        b1.Deposit(20000);
        b1.Balancecheck();
        b1.withdraw(2000);
        b1.Balancecheck();

    }
}