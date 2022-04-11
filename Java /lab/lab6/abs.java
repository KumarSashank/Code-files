package lab6;

abstract class Abstract {

    Abstract() {
        System.out.println("Abstract class constructor");
    }

    void parent() {
        System.out.println("Parent method");
    }
}

class child extends Abstract {
    child() {
        System.out.println("Child class constructor");
    }
}

public class abs {
    public static void main(String[] args) {
        // Abstract obj = new Abstract(); we cannot create instances of this class
        Abstract obj = new child();
        obj.parent();

    }
}
