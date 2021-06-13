import java.util.*;

public class HonestCoach {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] nums = new int[n];
            for(int j = 0; j < n; j++) {
                nums[j] = scan.nextInt();
            }
            System.out.println(minimumDiff(nums));
        }
    }

    private static int minimumDiff(int[] nums) {
        Arrays.sort(nums);
        int minimum = Math.abs(nums[0]-nums[1]);
        for(int i = 1; i < nums.length-1; i++) {
            if(Math.abs(nums[i]-nums[i+1]) < minimum)
                minimum = Math.abs(nums[i]-nums[i+1]);
        }
        return minimum;
    }
}
