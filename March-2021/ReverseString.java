public class ReverseString {
    public static void main(String[] args) {
        char[] s = {'h','e','l','l','o'};
        reverseString(s);
        System.out.print("[");
        for(int i = 0; i < s.length; i++) {
            System.out.print(s[i]);
            if(i < s.length-1)
                System.out.print(",");
        }
        System.out.println("]");

        char[] s2 = {'h','a','n','n','a','H'};
        reverseString(s2);
        System.out.print("[");
        for(int i = 0; i < s2.length; i++) {
            System.out.print(s2[i]);
            if(i < s2.length-1)
                System.out.print(",");
        }
        System.out.println("]");

    }

    public static void reverseString(char[] s) {
        for(int i = 0; i < s.length/2; i++) {
            char temp = s[i];
            s[i] = s[s.length-i-1];
            s[s.length-i-1] = temp;
        }
    }
}
