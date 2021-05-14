import java.util.*;

public class PoliceRecruits {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int ans = 0;
        int c = 0;
        for(int i = 0; i < n; i++) {
            int event = scan.nextInt();
            if(c == 0 && event == -1)
                ans++;
            else
                c += event;
        }
        System.out.println(ans);
    }
}