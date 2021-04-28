public class PalindromeNumber {
    public static void main(String[] args) {
        int x = 123454321;
        int y = 123456789;
        System.out.println(isPalindrome(x));
        System.out.println(isPalindrome(y));
    }

    public static boolean isPalindrome(int x) {
        if(x < 0)
            return false;
        String[] s = Integer.toString(x).split("");
        for(int i = 0; i < s.length/2; i++){
            if(!(s[i].equals(s[s.length-1-i])))
                return false;
        }
        return true;
    }
}
