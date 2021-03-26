public class MoveZeroes {
    public static void main(String[] args) {
        int[] nums = {0,1,0,3,12};
        moveZeroes(nums);
        System.out.print("[");
        for(int i = 0; i < nums.length; i++) {
            System.out.print(nums[i]);
            if(i < nums.length-1)
                System.out.print(",");
        }
        System.out.println("]");
    }

    public static void moveZeroes(int[] nums) {
        for(int i = 0; i < nums.length; i++) {
            for(int j = 0; j < nums.length-i-1; j++) {
                if(nums[j] == 0){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    }
}
