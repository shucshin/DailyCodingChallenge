public class RemoveDuplicates {
    public static void main(String[] args) {
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        int len = removeDuplicates(nums);
        System.out.printf("%d, nums = [", len);
        for(int i = 0; i < len; i++){
            System.out.print(nums[i]);
            if(i == len-1)
                continue;
            System.out.print(",");
        }
        System.out.println("]");
    }

    public static int removeDuplicates(int[] nums) {
        int temp = 1;
        for(int i = 0; i < nums.length-1; i++){
            if(nums[i] != nums[i+1]){
                nums[temp] = nums[i+1];
                temp++;
            }
        }
        return temp;
    }
}