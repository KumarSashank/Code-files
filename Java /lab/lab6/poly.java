//Polymorphism
package lab6;

class geometry_figure {

    // MainClass
    public void draw() {
        System.out.println("Drawing a geometry figure");

    }

    public void erase() {
        System.out.println("Erasing a geometry figure");
    }
}

class circle extends geometry_figure {
    public void draw() {
        System.out.println("Drawing a circle");
    }

    public void erase() {
        System.out.println("Erasing a circle");
    }
}

class triangle extends geometry_figure {
    public void draw() {
        System.out.println("Drawing a triangle");
    }

    public void erase() {
        System.out.println("Erasing a triangle");
    }
}

class square extends geometry_figure {
    public void draw() {
        System.out.println("Drawing a square");
    }

    public void erase() {
        System.out.println("Erasing a square");
    }
}

class poly {
    public static void main(String[] args) {
        geometry_figure obj[] = new geometry_figure[3];
        obj[0] = new circle();
        obj[1] = new triangle();
        obj[2] = new square();
        for (int i = 0; i < obj.length; i++) {
            obj[i].draw();
            obj[i].erase();
        }
    }
}
