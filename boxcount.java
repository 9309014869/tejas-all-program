Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@9309014869 
mohammedabdulbari
/
Java-SE
Public
Fork your own copy of mohammedabdulbari/Java-SE
Code
Issues
3
Pull requests
8
Actions
Projects
Security
Insights
Java-SE/ButtonDemo.java /
@mohammedabdulbari
mohammedabdulbari Add files via upload
Latest commit 858e0f6 on Jun 9, 2020
 History
 1 contributor
46 lines (33 sloc)  754 Bytes

package buttondemo;

import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame implements ActionListener
{
    int count=0;
    Label l;
    Button b;
    
    public MyFrame()
    {
        super("Button Demo");
        
        l=new Label("    "+count);
        b=new Button("Click");
        b.addActionListener(this);
        
        
        setLayout(new FlowLayout());
        add(l);
        add(b);
        
        
    }

    public void actionPerformed(ActionEvent e) 
    {
        count++;
        l.setText("  "+count);
    }
}


public class ButtonDemo 
{
    public static void main(String[] args) 
    {
        MyFrame f=new MyFrame();
        f.setSize(400,400);
        f.setVisible(true);
        
        
    }
}
