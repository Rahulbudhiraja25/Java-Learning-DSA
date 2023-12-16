import javax.swing.*;
import java.awt.*;

public class Awt extends Frame {
        Awt() {
                Label l1, l2;
                JPasswordField t2;
                Button b1, b2;
                TextField t1;

                l1 = new Label("Username");
                l2 = new Label("Password");
                // l2=new JPasswordField();
                b1 = new Button("Login");
                b2 = new Button("Reset");
                t1 = new TextField();
                t2 = new JPasswordField();
                l1.setForeground(Color.green);
                l2.setForeground(Color.green);
                t1.setBackground(Color.LIGHT_GRAY);
                t2.setBackground(Color.LIGHT_GRAY);
                b1.setBackground(Color.red);
                b2.setBackground(Color.blue);
                b1.setForeground(Color.blue);
                b2.setForeground(Color.red);
                l1.setBounds(20, 80, 80, 30);
                l2.setBounds(20, 150, 80, 30);
                t1.setBounds(200, 80, 150, 30);
                t2.setBounds(200, 150, 150, 30);
                b1.setBounds(100, 220, 80, 30);
                b2.setBounds(180, 220, 80, 30);

                add(l1);
                add(l2);
                add(t1);
                add(t2);
                add(b1);
                add(b2);

                setSize(800, 500);
                setLayout(null);
                setTitle("Login Page");
                setVisible(true);
        }

        public static void main(String args[]) {

                new Awt();
        }
}
