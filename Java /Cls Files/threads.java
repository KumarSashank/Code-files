class m1 extends Thread {
    public void run() {
        for (int j = 1; j < 8; j++) {
            System.out.println("Thread: " + j + Thread.currentThread().getId());
        }
    }
}

class threads {
    public static void main(String[] args) {
        m1 obj = new m1();
        obj.start();
    }
}