import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[][] arr = new int[n][];
        for(int i=0; i<n; i++){
            int d = scan.nextInt();
            arr[i] = new int[d]; 
            for(int j=0; j<d; j++){
                arr[i][j] = scan.nextInt();
            }
        }
        int q = scan.nextInt();
        for(int i=0; i<q; i++){
            try{
                int x = scan.nextInt();
                int y = scan.nextInt();
                System.out.println(arr[x - 1][y - 1]);
            }
            catch (Exception e) {
                System.out.println("ERROR!");
            }
        }
    }
}