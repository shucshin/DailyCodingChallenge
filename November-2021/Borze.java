import java.util.*;

public class Borze {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String t = "";
        String[] words = s.split("");
        for(int i = 0; i < words.length; i++) {
            if(words[i].equals("."))
                t += "0";
            else if(words[i].equals("-")) {
                if(words[i+1].equals("."))
                    t += "1";
                if(words[i+1].equals("-"))
                    t += "2";
                i++;
            }
        }
        System.out.println(t);
    }
}