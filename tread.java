 class Threardtest extends Thread
{
    public void run(){
        int i=1;
        while(true){
            try{
            Thread.sleep(100);
            System.out.println("hello");
            }catch(Exception e){
                System.out.println(e);
            }
            i++;
        }
    }
}
class Main{
    public static void main(String [] args){
        Threardtest t=new Threardtest();
        t.start();
        int i=1;
        
        while(true){
            try{
                Thread.sleep(100);
            System.out.println("hi");
            }catch(Exception e){
            }
            i++;
           
        }
    }
}
