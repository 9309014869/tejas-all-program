/* Online Java Compiler and Editor */
import java.util.*;
import java.util.io.*;
public class Tejas{
    public static void main(String args[]){
        FileInputStream fis=new FileInputStream("/Users/abdulbari/Documents/Data.txt");
        byte b[]=new byte[fis.available()];
        fis.read(b);
        String data=new String(b);
        StringTokenizer str=new StringTokenizer(data,",");
        String s;
        ArrayList<Integer>al=new Arraylist();
        while(stk.hasMoreTokens())
        {
            s=stk.nextTokens());
            al.add(Integer.valueOf(s));
        }
        System.out.println(al);
    }
}
