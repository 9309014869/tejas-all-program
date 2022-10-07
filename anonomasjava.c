
class Test{
   
  
 synchronized public void display(int n){
        for(int i=1;i<=10;i++){
            System.out.println(i*n);
        }
        try{
            Thread.sleep(10);}
            catch(Exception e){
                System.out.println(e);
            }
        }
}
        
public class Main{  
public static void main(String args[]){  
final Test obj = new Test();  
Thread t1=new Thread(){  
public void run(){  
obj.display(5);  
}  
};  
Thread t2=new Thread(){  
public void run(){  
obj.display(100);  
}  
};  
  
t1.start();  
t2.start();  
}  
}  
       
