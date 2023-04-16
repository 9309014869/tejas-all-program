public class Awt{
    Awt(){
        button b=new button("Click Me");
        b.setBounds(30,100,80,30);
        add(b);
        setSize(300,300);
        setTitle("this is our basic AWt ");
        setLayout(null);
        setVisible(true);
        }
        public static void main(String args[]){
            Awt f=new Awt();
        }
}
