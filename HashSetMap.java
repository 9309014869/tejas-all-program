import java.util.*;
public class HelloWorld{

     public static void main(String []args){
      LinkedHashSet<String>a=new LinkedHashSet<>(5);
      a.add("Akash");
     
      a.add("Sushant");
      a.add("Kunal");
      a.add("Ashawin");
      a.add("Bala");
      a.forEach(System.out::println);
      Iterator<String>m=a.iterator();
      while(m.hasNext())
      {
          System.out.println(m.next());
      }
     }
}
