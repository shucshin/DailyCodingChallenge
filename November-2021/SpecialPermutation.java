import java.util.*;

public class SpecialPermutation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] nums = new int[n];
            for(int j = 0; j < n; j++) {
                if(j == 0) {
                    nums[0] = n;
                    continue;
                }
                nums[j] = j;
            }
            printArray(nums);
        }
    }

    private static void printArray(int[] nums) {
        for(int i = 0; i < nums.length; i++) {
            if(i == nums.length-1) {
                System.out.println(nums[i]);
                break;
            }
            System.out.printf("%d ", nums[i]);
        }
    }
}