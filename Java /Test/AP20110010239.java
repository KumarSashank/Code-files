public class AP20110010239 {
    public static void main(String args[]){
        System.out.println("MANNAVA PRANEETH CHOWDARY"); System.out.println("Ap20110010239");
        int width, height;
        height = 5;
        width = (2 * height) - 1; int n = width / 2, i, j;
        for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++)
        {
        if (j == n || j == (width - n)
        || (i == height / 2 && j > n && j < (width - n)))
        System.out.printf("P"); else
        System.out.printf(" "); }
        System.out.printf("\n");
        n--; }
        }
}
