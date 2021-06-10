import java.util.*;

public class GiftsFixing {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] a = new int[n];
            for(int j = 0; j < n; j++) {
                a[j] = scan.nextInt();
            }
            int[] b = new int[n];
            for(int j = 0; j < n; j++) {
                b[j] = scan.nextInt();
            }
            System.out.println(minimumMoves(a, b));
        }
    }

    private static long minimumMoves(int[] a, int[] b) {
        int minA = a[0], minB = b[0];
        for(int i = 1; i < a.length; i++) {
            if(a[i] < minA)
                minA = a[i];
            if(b[i] < minB)
                minB = b[i];
        }

        long ans = 0;
        for(int i = 0; i < a.length; i++) {
            if(Math.abs(a[i]-minA) >= Math.abs(b[i]-minB))
                ans += Math.abs(a[i]-minA);
            if(Math.abs(a[i]-minA) < Math.abs(b[i]-minB))
                ans += Math.abs(b[i]-minB);
        }
        return ans;
    }
}
