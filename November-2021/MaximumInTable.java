import java.util.*;

public class MaximumInTable {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        if(n == 1) {
            System.out.println(1);
            return;
        }
        int[] nums = new int[n];
        for(int i = 0; i < n; i++) 
            nums[i] = 1;
        int[] ans = new int[n];
        ans[0] = 1;
        for(int i = 0; i < n-1; i++) {
            for(int j = 1; j < n; j++) {
                ans[j] = nums[j] + ans[j-1];
            }
            for(int j = 1; j < n; j++)
                nums[j] = ans[j];
        }
        System.out.println(ans[n-1]);
    }
}