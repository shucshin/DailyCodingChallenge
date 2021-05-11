import java.util.*;

public class BuyShovel {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        int r = scan.nextInt();

        int l = k;
        int ans = 1;
        while(k%10 != r && k%10 != 0) {
            k += l;
            ans++;
        }
        System.out.println(ans);
    }
}
