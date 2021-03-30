public class ReverseInteger {
    public static void main(String[] args) {
        int x = -2147483412;
        System.out.println(reverse(x));
    }

    public static int reverse(int x) {
        long reverse = 0;
        while(x != 0) {
            reverse = reverse*10 + x%10;
            x /= 10;
            if(reverse < Integer.MIN_VALUE || reverse > Integer.MAX_VALUE)
                return 0;
        }
        return (int)reverse;
    }
}