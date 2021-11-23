import java.util.*;

public class FavoriteSequence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long t = scan.nextLong();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            long[] nums = new long[n];
            for(int j = 0; j < n; j++) 
                nums[j] = scan.nextLong();
            long[] ans = beforeWhiteboard(nums);
            printArray(ans);
        }
    }

    private static long[] beforeWhiteboard(long[] nums) {
        long[] ans = new long[nums.length];
        int j = 0;
        for(int i = 0; i < nums.length-1; i+=2) {
            ans[i] = nums[i-j];
            ans[i+1] = nums[nums.length-j-1];
            j++;
        }
        if(nums.length%2 != 0)
            ans[nums.length-1] = nums[nums.length/2];
        return ans;
    }

    private static void printArray(long[] arr) {
        for(int i = 0; i < arr.length; i++) {
            if(i == arr.length-1) {
                System.out.println(arr[i]);
                break;
            }
            System.out.printf("%d ", arr[i]);
        }
    }
}