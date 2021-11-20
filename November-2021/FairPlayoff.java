import java.util.*;

public class FairPlayoff {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int c = scan.nextInt();
            int d = scan.nextInt();
            int max1 = Math.max(a, b);
            int min1 = Math.min(a, b);
            int max2 = Math.max(c, d);
            int min2 = Math.min(c, d);
            if(max1 < min2 || max2 < min1)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}