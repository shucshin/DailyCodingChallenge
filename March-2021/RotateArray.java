public class RotateArray {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5,6,7};
        int k = 3;
        rotate(nums, k);
        System.out.print("[");
        for(int i = 0; i < nums.length; i++){
            System.out.print(nums[i]);
            if(i == nums.length-1)
                continue;
            System.out.print(",");
        }
        System.out.println("]");
    }
    
    public static void rotate(int[] nums, int k) {
        int temp, previous;
        for(int i = 0; i < k; i++){
            previous = nums[nums.length-1];
            for(int j = 0; j < nums.length; j++){
                temp = nums[j];
                nums[j] = previous;
                previous = temp;
            }
        }
        /*==Takes too long==
        for(int i = 0; i < k; i++){
            int temp = nums[nums.length-1];
            for(int j = 0; j < nums.length-1; j++){
                nums[nums.length-j-1] = nums[nums.length-j-2];
            }
            nums[0] = temp;
        }*/
    }
}

