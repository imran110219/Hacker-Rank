import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger bi1 = scan.nextBigInteger();
        BigInteger bi2 = scan.nextBigInteger();
        System.out.println(bi1.add(bi2));
        System.out.println(bi1.multiply(bi2));
    }
}