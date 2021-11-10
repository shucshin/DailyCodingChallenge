import java.util.*;

public class CollectingCoins {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long t = scan.nextInt();
        for(long i = 0; i < t; i++) {
            long a = scan.nextInt();
            long b = scan.nextInt();
            long c = scan.nextInt();
            long n = scan.nextInt();
            long ans = a+b+c+n;
            long p = ans/3;

            if(ans%3 == 0) {
                if(a > p || b > p || c > p) {
                    System.out.println("NO");
                    continue;
                }
                System.out.println("YES");
            }
            else 
                System.out.println("NO");
        }
    }
}
