class Employe{
   private int id;
   private String name;
   private int rollno;
   public void setName(String n){
       this.name=n;
   }
   public String getName(){
       return name;
   }
   
    public void setId(int id){
        this.id=id;
    }
     public int getId(){
        return id;
    }

    }

class Main{
    public static void main(String[] args){
      Employe  sc=new Employe();
      sc.setId(766);
      sc.setName("tejas");
      System.out.println(sc.getName());
      System.out.println(sc.getId());
    }  
}
