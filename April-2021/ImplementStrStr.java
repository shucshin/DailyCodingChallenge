import java.util.*;

public class ImplementStrStr {
    public static void main(String[] args) {
        String haystack = "hello", needle = "ll";
        System.out.println(strStr(haystack, needle));
        String haystackk = "aaaaa", needlee = "bba";
        System.out.println(strStr(haystackk, needlee));
    }

    public static int strStr(String haystack, String needle) {
        if(!(haystack.contains(needle)))
            return -1;
        return haystack.indexOf(needle);
    }
}