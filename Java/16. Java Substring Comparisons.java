import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        int n=sc.nextInt();
        int len = A.length() - n + 1;
        String sub[] = new String[len];
        int min,max;
        for(int i=0; i<len; i++){
            sub[i] = A.substring(i, i+n);
        }
        min=0;
        max=0;
        for(int i=0; i<len; i++){
            if(sub[min].compareTo(sub[i])<0)
                min=i;
            if(sub[max].compareTo(sub[i])>0)
                max=i;
        }
        System.out.println(sub[max]);
        System.out.println(sub[min]);
    }
}