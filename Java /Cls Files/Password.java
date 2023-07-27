// Java program to implement
// a Simple Registration Form
// using Java Swing

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

// Main Program
class Password {

	public static void main(String[] args) throws Exception {
		Generator f = new Generator();
	}
}

//
class Generator extends JFrame implements ActionListener {

	// Components of the Form
	private Container c;
	private JLabel title;
	private JLabel polacy;
	private JTextField tpass;
	private JLabel validate;
	private JTextField tvalidate;
	private JButton btngen;
	private JButton btnval;
	private JButton btnreset;
	private JButton btnexit;
	private JCheckBox upper;
	private JCheckBox lower;
	private JCheckBox digit;
	private JCheckBox spchar;

	// constructor, to initialize the components
	// with default values.
	public Generator() {
		setTitle("Password Management");
		setBounds(300, 90, 900, 600);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setResizable(false);

		c = getContentPane();
		c.setLayout(null);

		title = new JLabel("Password Management Form");
		title.setFont(new Font("Arial", Font.PLAIN, 30));
		title.setSize(400, 30);
		title.setLocation(300, 30);
		c.add(title);
		polacy = new JLabel("Password Polacy Rules");
		polacy.setFont(new Font("Arial", Font.PLAIN, 20));
		polacy.setSize(400, 30);
		polacy.setLocation(600, 80);
		c.add(polacy);

		upper = new JCheckBox("Upper Case ", true);
		upper.setFont(new Font("Arial", Font.PLAIN, 20));
		upper.setSize(250, 30);
		upper.setLocation(600, 105);
		c.add(upper);
		lower = new JCheckBox("Lower Case ");
		lower.setFont(new Font("Arial", Font.PLAIN, 20));
		lower.setSize(250, 30);
		lower.setLocation(600, 140);
		c.add(lower);
		digit = new JCheckBox("Digit");
		digit.setFont(new Font("Arial", Font.PLAIN, 20));
		digit.setSize(250, 30);
		digit.setLocation(600, 180);
		c.add(digit);
		spchar = new JCheckBox("Spcial char ");
		spchar.setFont(new Font("Arial", Font.PLAIN, 20));
		spchar.setSize(250, 30);
		spchar.setLocation(600, 220);
		c.add(spchar);

		// text box add

		tpass = new JTextField();
		tpass.setFont(new Font("Arial", Font.PLAIN, 15));
		tpass.setSize(190, 30);
		tpass.setLocation(300, 100);
		c.add(tpass);

		tvalidate = new JTextField();
		tvalidate.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalidate.setSize(190, 30);
		tvalidate.setLocation(300, 150);
		c.add(tvalidate);

		// buttons add
		btngen = new JButton("Generate");
		btngen.setFont(new Font("Arial", Font.PLAIN, 15));
		btngen.setSize(120, 30);
		btngen.setLocation(100, 100);
		btngen.addActionListener(this);
		c.add(btngen);

		btnval = new JButton("Validate");
		btnval.setFont(new Font("Arial", Font.PLAIN, 15));
		btnval.setSize(120, 30);
		btnval.setLocation(100, 150);
		btnval.addActionListener(this);
		c.add(btnval);

		btnreset = new JButton("Reset");
		btnreset.setFont(new Font("Arial", Font.PLAIN, 15));
		btnreset.setSize(120, 30);
		btnreset.setLocation(100, 200);
		btnreset.addActionListener(this);
		c.add(btnreset);

		btnexit = new JButton("Exit");
		btnexit.setFont(new Font("Arial", Font.BOLD, 16));
		btnexit.setSize(120, 30);
		btnexit.setLocation(100, 250);
		btnexit.addActionListener(this);
		c.add(btnexit);

		setVisible(true);
	}

	// method actionPerformed()
	// to get the action performed
	// by the user and act accordingly
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == btnexit) {
			int a = JOptionPane.showConfirmDialog(c, "Are you sure?");
			if (a == JOptionPane.YES_OPTION) {
				System.exit(0);
			}
		}

		if (e.getSource() == btngen) {

			if (upper.isSelected() || lower.isSelected() || digit.isSelected()) {
				String pwd = generate_password(12, upper.isSelected(), lower.isSelected(), digit.isSelected(),
						spchar.isSelected());
				tpass.setText(pwd);
			} else
				JOptionPane.showMessageDialog(c, "Password contains atleat upper, lower or digit ");

		}
		if (e.getSource() == btnval) {
			tvalidate.setEditable(true);
			String validation = password_strength(tpass.getText());
			tvalidate.setText(validation);
			tvalidate.setEditable(false);

		}
		if (e.getSource() == btnreset) {
			String bl = "";
			tpass.setText(bl);
			tvalidate.setEditable(true);
			tvalidate.setText(bl);

		}
	}

	static String generate_password(int size, boolean upper, boolean lower, boolean number, boolean special) {
		String upper_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String lower_chars = "abcdefghijklmnopqrstuvwxyz";
		String number_chars = "1234567890";
		String special_chars = "!@#$";

		String chars = "";
		if (upper) {
			chars += upper_chars;
		}
		if (lower) {
			chars += lower_chars;
		}
		if (number) {
			chars += number_chars;
		}
		if (special) {
			chars += special_chars;
		}
		String password = "";
		// include at least one of each type
		int count = 0;
		if (upper) {
			password += upper_chars.charAt((int) (Math.random() * upper_chars.length()));
			count++;
		}
		if (lower) {
			password += lower_chars.charAt((int) (Math.random() * lower_chars.length()));
			count++;
		}
		if (number) {
			password += number_chars.charAt((int) (Math.random() * number_chars.length()));
			count++;
		}
		if (special) {
			password += special_chars.charAt((int) (Math.random() * special_chars.length()));
			count++;
		}
		Random rnd = new Random();
		while (password.length() < size - count) {
			int index = (int) (rnd.nextFloat() * chars.length());
			password += chars.charAt(index);
		}
		// shuffle the password
		String shuffled = "";
		while (password.length() > 0) {
			int index = (int) (rnd.nextFloat() * password.length());
			shuffled += password.charAt(index);
			password = password.substring(0, index) + password.substring(index + 1);
		}
		return shuffled;
	}

	static String password_strength(String password) {
		int strength = 0;
		if (password.length() >= 8) {
			strength += 1;
		}
		if (password.matches(".*[A-Z].*")) {
			strength += 1;
		}
		if (password.matches(".*[a-z].*")) {
			strength += 1;
		}
		if (password.matches(".*[0-9].*")) {
			strength += 1;
		}
		if (password.matches(".*[!@#$%^&*()_+-/.,<>?;':\"{}\\|`~].*")) {
			strength += 1;
		}
		if (strength == 1) {
			return "Very Weak";
		} else if (strength == 2) {
			return "Weak";
		} else if (strength == 3) {
			return "Medium";
		} else if (strength == 4) {
			return "Strong";
		} else if (strength == 5) {
			return "Very Strong";
		}
		return "Very Weak";
	}
}
