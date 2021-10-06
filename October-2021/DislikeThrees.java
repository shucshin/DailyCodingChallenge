import java.util.*;

public class DislikeThrees {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int k = scan.nextInt();
            int ans = 0;
            for(int j = 1; j <= k; j++) {
                if(j%3 == 0 || j%10 == 3)
                    k++;
                ans++;
            }
            System.out.println(ans);
        }
    }
}
