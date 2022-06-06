package mid1;

class Parent {
    public Parent() {
        System.out.println("Parent class in execution");
    }

    public void method1() {
        System.out.println("Parent method");
    }
}

class Child extends Parent {
    public Child() {
        System.out.println("Child class in execution");
    }

    public void method2() {
        System.out.println("Child method");
    }
}

public class q1 {
    public static void main(String[] args) {
        Parent obj1 = new Parent();
        Child obj2 = new Child();
        obj1.method1();
        obj2.method2();
        obj2.method1();
    }
}