import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();   
        int d = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if(i+d >= n)
                System.out.print(arr[i+d-n]+" ");
            else
                System.out.print(arr[i+d]+" ");
        }
    }
}