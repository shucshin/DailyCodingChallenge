import java.util.*;

public class SingleNumber {
    public static void main(String[] main) {
        int[] nums = {4,1,2,1,2};
        System.out.println(singleNumber(nums));
        int[] nums2 = {1};
        System.out.println(singleNumber(nums2));
    }

    public static int singleNumber(int[] nums) {
        Arrays.sort(nums);
        int sum = 0;
        int sum2 = 0;
        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
        }
        for(int j = 0; j < nums.length; j+=2){
            sum2 += 2 * nums[j]; 
        }
        int answer = sum2 - sum;
        return answer;
    }
}
