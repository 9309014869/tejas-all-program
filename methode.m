class My extends Thread{
    public My(String name){
        super(name);
       
    }
    }
    
class Main{
    public static void main(String[] args) 
    {
        My t=new My("tejas");
        System.out.println("in"+t.getId());
     System.out.println("in"+t.getName());
     System.out.println("in"+t.isAlive());
     System.out.println("in"+t.getState());
     
        }
    }
