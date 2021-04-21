import java.util.*;

public class ValidPalindrome {
    public static void main(String[] args) {
        String s = "A man, a plan, a canal: Panama";
        System.out.println(isPalindrome(s));
        String t = "race a car";
        System.out.println(isPalindrome(t));
    }

    public static boolean isPalindrome(String s) {
        s = s.toLowerCase();
        s = s.replaceAll("[^a-z0-9]", "");
        String[] words = s.split("");
        for(int i = 0; i < words.length/2; i++){
            if(!(words[i].equals(words[words.length-1-i]))){
                return false;
            }
        }
        return true;
    }
}
