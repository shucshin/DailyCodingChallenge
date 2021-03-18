import java.util.*;

public class DominoWindowsill {
    public static void main(String[] main) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++){
            int n = scan.nextInt();
            int k1 = scan.nextInt();
            int k2 = scan.nextInt();
            int w = scan.nextInt();
            int b = scan.nextInt();
            if( k1+k2 >= 2*w && 2*(w+b) <= 2*n && 2*n - (k1+k2) >= 2*b )
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
