import java.util.*;

public class ContainsDuplicate {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        System.out.println(containsDuplicate(nums));
        int[] nums2 = {1,1,1,3,3,4,3,2,4,2};
        System.out.println(containsDuplicate(nums2));
    }

    public static boolean containsDuplicate(int[] nums){
        Arrays.sort(nums);
        for(int i = 0; i < nums.length-1; i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
        /*==Time Limit Exceeded
        for(int i = 0; i < nums.length; i++){
            for(int j = 1; j < nums.length-i; j++){
                if(nums[i] == nums[j+i])
                    return true;
            }
        }
        return false;*/
    }
}
