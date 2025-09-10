import java.awt.Color;
import javax.swing.JFrame;
import javax.swing.ImageIcon;
// import javax.swing.JLabel;
public class Jframe{
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(600,420);
        frame.setVisible(true);
        frame.setTitle("Introductiont to JFrame");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(true);
        ImageIcon image = new ImageIcon("narayan.jpeg");
        frame.setIconImage(image.getImage());
        //frame.getContentPane().setBackground(new Color(255,255,255));
        // JLabel label = new JLabel();
        // label.setText("Hello Dude !");
        // //frame.setLayout(null);
        // //label.setBounds(50,50,100,50);
        // frame.add(label);
        
    }
}