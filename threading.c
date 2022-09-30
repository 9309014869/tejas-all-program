class Mythread extends Thread

{
    int i;
    public void run(){
    while(true){
    
        System.out.println("h");
        i++;
    }
    }
}
class Main {
    public static void main(String[] args){
      // Mythread t=new Mythread();
       //t.start();
       
       {
           int i=1;
           while(true){
                System.out.println("hello");
           try{
               Thread.sleep(6000);
           }
           catch(InterruptedException e)
       {
           System.out.println(e);
       }
       
       }
    }
}
}
