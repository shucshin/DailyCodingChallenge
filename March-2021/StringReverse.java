import java.io.*;
import java.util.*;

public class StringReverse {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        StringBuffer sb = new StringBuffer(A);
        String s = sb.reverse().toString();
        if(A.equals(s))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}

