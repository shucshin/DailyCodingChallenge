import java.util.*;

public class Presents {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] p = new int[n];
        for(int i = 0; i < n; i++) {
            int a = scan.nextInt();
            p[i] = a;
        }

        int q[] = new int[n];
        for(int j = 0; j < n; j++) {
            int temp = p[j];
            q[temp-1] = j+1;
        }

        for(int k = 0; k < n; k++) {
            System.out.print(q[k] + " ");
        }
    }
}
