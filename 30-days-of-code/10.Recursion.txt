import java.io.*;
import java.util.*;

public class Solution {

    public static int factorial(int number){
        int temp = number;
        int product;
        if(temp==1)
            return 1;
        product=temp*factorial(temp-1);
        return product;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(factorial(n));
    }
}