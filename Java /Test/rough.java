public class rough {
    public static void main(String args[]) {
        System.out.println("Ruhi Kashmi Tofia");
        System.out.println("AP20110010218");

        // taking variable for loop iteration and row .
        int row = 5, r, c, d = 0;
        // // outer for loop
        for (r = 0; r < row; r++) {
            // Stars will be printed in first column
            System.out.print("R");
            // inner for loop
            if (r == 1) {
                for (c = 0; c < row - 1; c++) {
                    System.out.print(" ");
                }
                System.out.print("R");
            }
            for (c = 0; c < row; c++) {
                if (r == 0 || r == 2)
                    System.out.print("R");
                else
                    continue;
            }
            System.out.print("\n");
        }
    }
}