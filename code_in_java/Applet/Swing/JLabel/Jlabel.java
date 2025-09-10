import javax.swing.ImageIcon;
import java.awt.Font;
import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
 class MyFrame extends JFrame {
    public MyFrame(){

        this.setSize(500,500);
        this.setVisible(true);
        this.setTitle("Introductiont to JFrame");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(true);
        ImageIcon image = new ImageIcon("narayan.jpeg");
        this.setIconImage(image.getImage());
        this.getContentPane().setBackground(new Color(123,144,4));
    }
}
public class Jlabel{
    public static void main(String[] args) {
        MyFrame frame = new MyFrame();
        JLabel label = new JLabel();
        ImageIcon dude = new ImageIcon("dude.jpeg");
        label.setHorizontalTextPosition(JLabel.CENTER);// RIGHT , LEFT , CENTER
        label.setVerticalTextPosition(JLabel.TOP);  // TOP , BOTTOM , CENTER 
        label.setFont(new Font("MV BOLI",Font.PLAIN,20));
        label.setForeground(new Color(255,0,0));    // Set text color of labeling font
        label.setIconTextGap(-5);  // gaping image and text

        label.setText("Hello dude !");
        label.setIcon(dude);

        frame.add(label);
    }
}
