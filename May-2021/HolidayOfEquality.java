import java.util.*;

public class HolidayOfEquality {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
        }
        solve(nums);
    }

    private static void solve(int[] nums) {
        Arrays.sort(nums);
        int max = nums[nums.length-1];
        int ans = 0;
        for(int i = 0; i < nums.length; i++) {
            int rem = max - nums[i];
            ans += rem;
        }
        System.out.println(ans);
    }
}
