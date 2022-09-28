class myThread extends Thread
{
    public void run(){
        int i=1;
        while(true){
            System.out.println("hello");
            i++;
        }
    }
}
class Main{
    public static void main(String[] args){
       myThread r=new myThread();
       r.start();
       int i=1;
       while(true){
          System.out.println("hi"); 
       }
    }
}
