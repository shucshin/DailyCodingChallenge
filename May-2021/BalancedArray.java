import java.util.*;

public class BalancedArray {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            balancedArray(n);
        }
    }

    private static void balancedArray(int n) {
        if((n/2) % 2 != 0) {
            System.out.println("NO");
            return;
        }
        System.out.println("YES");
        int firstHalf = 2;
        int totalFirst = 0;
        for(int i = 0; i < n/2; i++) {
            System.out.print(firstHalf + " ");
            totalFirst += firstHalf;
            firstHalf += 2;
        }

        int secondHalf = 1;
        int totalSecond = 0;
        for(int i = 1; i < n/2; i++) {
            System.out.print(secondHalf + " ");
            totalSecond += secondHalf;
            secondHalf += 2;
        }

        System.out.println(totalFirst-totalSecond);
    }
}