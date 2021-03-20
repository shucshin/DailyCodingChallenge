import java.util.*;

public class Word {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String[] word = s.split("");
        int lower = 0;
        int upper = 0;

        for(int i = 0; i < word.length; i++){
            if(word[i].matches("\\p{Lower}"))
                lower++;
            if(word[i].matches("[A-Z]"))
                upper++;
        }
        if(lower >= upper)
            System.out.println(s.toLowerCase());
        if(upper > lower)
            System.out.println(s.toUpperCase());
    }
}
