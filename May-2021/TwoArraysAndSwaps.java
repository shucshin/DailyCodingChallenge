import java.util.*;

public class TwoArraysAndSwaps {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int k = scan.nextInt();

            int[] a = new int[n];
            for(int j = 0; j < n; j++) {
                a[j] = scan.nextInt();
            }
            Arrays.sort(a);

            int[] b = new int[n];
            for(int j = 0; j < n; j++) {
                b[j] = scan.nextInt();
            }
            Arrays.sort(b);

            System.out.println(solve(a, b, k));
        }
    }

    private static int solve(int[] a, int[] b, int k) {
        for(int i = 0; i < k; i++) {
            int n = a.length-1-i;
            if(a[i] >= b[n])
                break;
            int temp = a[i];
            a[i] = b[n];
            b[n] = temp;
        }
        int maxSum = 0;
        for(int i = 0; i < a.length; i++) {
            maxSum += a[i];
        }
        return maxSum;
    }
}
