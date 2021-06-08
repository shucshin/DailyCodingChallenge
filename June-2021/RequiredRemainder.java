import java.util.*;

public class RequiredRemainder {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int x = scan.nextInt();
            int y = scan.nextInt();
            int n = scan.nextInt();
            System.out.println((n-y)/x*x+y);
        }
    }
}
