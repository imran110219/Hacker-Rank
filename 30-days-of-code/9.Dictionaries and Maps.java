import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map pro = new HashMap();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();           
            pro.put(name, phone);
        }
        
        while(in.hasNext()){
            String s = in.next();
            if(pro.containsKey(s))
                System.out.println(s + "=" + pro.get(s));
            else
                System.out.println("Not found");
        }
        in.close();
    }
}
