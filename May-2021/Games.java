import java.util.*;

public class Games {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] host = new int[n];
        int[] guest = new int[n];

        for(int i = 0; i < n; i++) {
            host[i] = scan.nextInt();
            guest[i] = scan.nextInt();
        }

        int ans = 0;
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < n; i++) {
                if(i == j)
                    continue;
                if(host[j] == guest[i])
                    ans++;
            }
        }
        System.out.println(ans);
    }
}
