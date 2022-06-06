public class pattern {
    public static void main(String[] args) {
        System.out.println("Kumar Sashank AP20110010229\n");
        for (int i = 0; i < 5; i++) {
            if (i != 2) {
                System.out.print("K");
                for (int j = 0; j < 7; j++) {
                    System.out.print(" ");
                }
                System.out.println("K");
            } else {
                for (int j = 0; j < 9; j++) {
                    System.out.print("K");
                }
                System.out.println();
            }
        }
    }
}
