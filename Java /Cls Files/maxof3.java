public class maxof3 {
    public static void main(String[] args) {
        int a = 20, b = 30, c = 40;
        int max = (a > b) ? a : b;
        max = (max > c) ? max : c;
        System.out.println("Maximum of three numbers is " + max);
    }
}