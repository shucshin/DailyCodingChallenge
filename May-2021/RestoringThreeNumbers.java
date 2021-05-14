import java.util.*;

public class RestoringThreeNumbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] nums = new int[4];
        for(int i = 0; i < 4; i++) {
            nums[i] = scan.nextInt();
        }
        Arrays.sort(nums);
        int a = nums[3] - nums[2];
        int b = nums[3] - nums[1];
        int c = nums[3] - nums[0];
        System.out.printf("%d %d %d\n", a,b,c);
    }
}