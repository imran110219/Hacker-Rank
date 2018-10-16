import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import static java.lang.Math.abs;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[][] = new int[n][n];
        int primary=0;
        int secondary=0;
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
                if(a_i==a_j)
                    primary += a[a_i][a_j];
                if(a_i+a_j==n-1)
                    secondary += a[a_i][a_j];
            }
        }
        System.out.println(abs(primary-secondary));
    }
}
