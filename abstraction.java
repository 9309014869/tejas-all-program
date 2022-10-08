abstract class Tejas{
    final int x =90;
    abstract void display();
    abstract void display1();
}
class Akash extends Tejas{
    void display(){
        System.out.println("Atm");
    }
    void display1(){
        System.out.println("enter the Number");
    }
}
class Main{
    public  static void main(String[] args ){
        Akash sc=new Akash();
        sc.display();
        sc.display1();
        System.out.println(sc.x);
    }
}
