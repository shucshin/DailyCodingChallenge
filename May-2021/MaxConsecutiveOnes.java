import java.util.*;

public class MaxConsecutiveOnes {
    public static void main(String[] args) {
        int[] nums = {1,1,0,1,1,1};
        System.out.println(findMaxConsecutiveOnes(nums));
    }

    public static int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int counter = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == 1)
                counter++;
            else{
                if(counter > max){
                    max = counter;
                }
                counter = 0;
            }
        }
        if(counter > max)
            max = counter;
        return max;
    }
}
