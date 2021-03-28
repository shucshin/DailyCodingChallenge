import java.util.*;

public class GravityFlip {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];

        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
        }

        Arrays.sort(nums);

        for(int j = 0; j < nums.length; j++){
            System.out.print(nums[j] + " ");
        }
    }
}
