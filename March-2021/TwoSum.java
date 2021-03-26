public class TwoSum {
    public static void main(String[] args) {
        int[] nums = {2,7,11,15};
        int target = 9;
        int[] index = twoSum(nums, target);
        System.out.print("[");
        for(int i = 0; i < index.length; i++) {
            System.out.print(index[i]);
            if(i < index.length-1)
                System.out.print(",");
        }
        System.out.println("]");
    }

    public static int[] twoSum(int[] nums, int target) {
        int[] sum = new int[2];

        for(int i = 0; i < nums.length; i++) {
            for(int j = 0; j < nums.length; j++) {
                if(i == j)
                    continue;
                if(nums[i] + nums[j] == target){
                    sum[0] = i;
                    sum[1] = j;
                }
            }
        }
        return sum;
    }
}
