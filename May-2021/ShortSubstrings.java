import java.util.*;

public class ShortSubstrings {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for(int i = 0; i < t; i++) {
            String[] word = scan.nextLine().split("");
            System.out.println(ShortSubString(word));
        }
    }

    private static String ShortSubString(String[] word) {
        String ans = "";
        for(int i = 0; i < word.length-1; i+=2) {
            ans += word[i];
        }
        if(ans.length() != (word.length/2)+1)
            ans += word[word.length-1];
        return ans;
    }
}