import java.util.concurrent.Semaphore;

class Student implements Runnable {
	private int studentNum;
	private SignalSemaphore wakeup;
	private Semaphore chairs;
	private Semaphore available;

	public Student(SignalSemaphore w, Semaphore c, Semaphore a, int num) {
		wakeup = w;
		chairs = c;
		available = a;
		studentNum = num;
	}

	public void run() {
		int i = 0;
		for (; i < SleepingTA.TA_visit;) {
			try {
				// Program first.
				System.out.println("Student " + studentNum + " has started programming ");
				Thread.sleep(1000); // used to pause the execution of current thread for specified time in
									// milliseconds
				System.out.println("Student " + studentNum + " is checking to see if TA is available.");
				if (available.tryAcquire()) {
					try {
						wakeup.take();
						System.out.println("Student " + studentNum + " woke up the TA.");
						System.out.println("Student " + studentNum + " has started working with the TA.");
						Thread.sleep(1000);
						System.out.println("Student " + studentNum + " has stopped working with the TA.");
						i++;
					} catch (InterruptedException e) {
						continue;
					} finally {
						available.release();
					}
				} else {
					System.out
							.println("Student " + studentNum + " could not see the TA. Checking for available chairs.");
					if (chairs.tryAcquire()) {
						try {
							System.out.println("Student " + studentNum + " is sitting outside the office. " + "He is #"
									+ ((SleepingTA.chair - chairs.availablePermits())) + " in line.");
							available.acquire();
							System.out.println("Student " + studentNum + " has started working with the TA.");
							i++;
							Thread.sleep(1000);
							System.out.println("Student " + studentNum + " has stopped working with the TA.");
							available.release();
						} catch (InterruptedException e) {
							continue;
						}
					} else {
						System.out.println("Student " + studentNum
								+ " could not see the TA and all chairs were taken. Back to programming!");
					}
				}
			} catch (InterruptedException e) {
				break;
			}
		}
		if (i == SleepingTA.TA_visit) {
			System.out.println("Student " + studentNum + " HAS COMPLETED THEIR PROGRAMMING ASSIGNMENT");
		}
	}
}