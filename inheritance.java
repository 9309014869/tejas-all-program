class Animals{
    int age;
    String colour;
public void dog(){
    System.out.println("bhoai bhoai");
}
public void cat(){
    System.out.println("maiu");    
}
}
class Monkey extends Animals{
    public void chichi(){
        System.out.println("hup hup");   
    }
    
    }
class Human extends Monkey{
    public void khekhada(){
    System.out.print("mjnjnjnsd");
    }
    @Override
        public void dog(){
    System.out.println("bhoai bhoaip");
}
}


class Main{
    public  static void main(String[] args){ 
    Human sc=new Human();
    Animals st=new Animals();
    sc.khekhada();
    sc.dog();
    sc.dog();
    sc.cat();
        sc.chichi();
        st.dog();
    }
}
