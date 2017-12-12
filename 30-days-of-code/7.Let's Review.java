import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test>0)
        {
            String A = sc.next();
            String even = "";
            String odd = "";
            for (int i = 0; i < A.length(); i++) {
                if (i % 2 == 0) {
                    even += A.charAt(i);
                } else {
                    odd += A.charAt(i);
                }
            }
            System.out.println(even + " " + odd);
            test--;
        }
    }
}