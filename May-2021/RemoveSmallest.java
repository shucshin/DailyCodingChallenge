import java.util.*;

public class RemoveSmallest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] nums = new int[n];

            for(int j = 0; j < n; j++) {
                nums[j] = scan.nextInt();
            }
            System.out.println(removeSmallest(nums));
        }
    }

    private static String removeSmallest(int[] nums) {
        if(nums.length == 1)
            return "YES";
        Arrays.sort(nums);
        for(int i = 0; i < nums.length-1; i++) {
            if(Math.abs(nums[i] - nums[i+1]) > 1)
                return "NO";
        }
        return "YES";
    }
}
