public class methods {
    public static void main(String[] args) {
        show1();
        methods object1 = new methods();
        object1.show2();
    }

    static void show1() {
        System.out.println("By using static keyword");
    }

    void show2() {
        System.out.println("By Creating an Object");
    }
}
