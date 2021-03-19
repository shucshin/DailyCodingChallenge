import java.io.*;
import java.util.*;

public class StringTokens {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        scan.close();
        s = s.replaceAll("\\p{Punct}", " ");
        s = s.trim().replaceAll(" +", " ");
        String[] token = s.split("\\s");

        if(s.isEmpty()){
            System.out.println(0);
            System.exit(0);
        }
        System.out.println(token.length);
        for(int i = 0; i < token.length; i++){
            System.out.println(token[i]);
        }
    }
}
