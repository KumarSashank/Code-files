import java.math.BigInteger;

public class big_int {
    public static void main(String[] args) {
        BigInteger big1, big2, big3, big4, big5, big6, big7;
        double quotient; // create 3 BigInteger objects
        big1 = new BigInteger("182841384165841685416854134135"); // assign value to big1
        big2 = new BigInteger("135481653441354138548413384135");// assign value to big2
        big3 = big1.add(big2); // perform add operation on big1 using big2
        big4 = big1.subtract(big2); // perform sub operation on big1 using big2
        big5 = big1.multiply(big2); // perform mul operation on big1 using big2
        big7 = big1.mod(big2); // perform mod operation on big1 using big2
        double d = Double.parseDouble("182841384165841685416854134135")
                / Double.parseDouble("135481653441354138548413384135");
        String str = "Addition : " + big3;
        String str1 = "Subtraction: " + big4;
        String str2 = "Multiplication: " + big5;
        String str3 = "Division: " + d;
        String str4 = "Mod: " + big7;
        System.out.println(str);
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
        System.out.println(str4);
    }
}