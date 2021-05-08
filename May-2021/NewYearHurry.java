import java.util.*;

public class NewYearHurry {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();

        int remaining = 240 - k;
        int ans = 0;

        for(int i = 1; i <= n; i++) {
            if(remaining >= i*5){
                remaining -= i*5;
                ans++;
            }
        }
        System.out.println(ans);
    }
}
