import java.util.Scanner;

public class Box {
    int width;
    int height;
    int breadth;

    void volume() {
        System.out.println("Volume is:" + width * breadth * height);
    }

    public static void main(String[] args) {
        Box obj = new Box();
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the width");
        obj.width = input.nextInt();
        System.out.println("Enter the breadth");
        obj.breadth = input.nextInt();
        System.out.println("Enter the height");
        obj.height = input.nextInt();
        obj.volume();
        input.close();
    }
}
