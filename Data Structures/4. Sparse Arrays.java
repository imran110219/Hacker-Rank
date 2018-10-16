import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] num = new String[n];
        for (int i = 0; i < n; i++) {
            num[i] = in.next();
        }
        int m = in.nextInt();
        String[] query = new String[m];
        for (int i = 0; i < m; i++) {
            query[i] = in.next();
        }
        for (int i = 0; i < m; i++) {
            int counter = 0;
            for (int j = 0; j < n; j++) {
                if(query[i].compareTo(num[j]) == 0)
                    counter++;
            }
            System.out.println(counter);
        }
    }
}