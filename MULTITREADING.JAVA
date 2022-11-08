class MyThread extends Thread
{
    
    int a=0;
  synchronized    public void run(){  
    while(a!=11){
        
        try{
            Thread.sleep(1);
        }catch(Exception e){
            System.out.print("errror");
           
        }
        System.out.println(a);
         a++;
    }
}
}
class MyThread1 extends Thread
{
    int b=11;
   synchronized public void run(){  
    while(b!=20){
                
        try{
            Thread.sleep(100);
        }catch(Exception e){
            System.out.println("errror");
        }
        System.out.println(b);
        b++;
    }
    }
}
class Main{
    public static void main(String args[]){  
    MyThread obj= new MyThread();
    MyThread1 obj1=new  MyThread1 ();
    obj.start();  
    obj1.start();  
}
}
