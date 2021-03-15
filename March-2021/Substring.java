import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Substring {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int start = in.nextInt();
        int end = in.nextInt();

        String[] sr = S.split("");
        String subString = "";
        for(int i = start; i < end; i++){
            subString += sr[i];
        }
        System.out.println(subString);
    }
}
