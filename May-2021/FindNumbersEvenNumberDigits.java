public class FindNumbersEvenNumberDigits {
    public static void main(String[] args) {
        int[] nums = {12,345,2,6,7896};
        System.out.println(findNumbers(nums));
        int[] nums2 = {555,901,482,1771};
        System.out.println(findNumbers(nums2));
    }

    public static int findNumbers(int[] nums) {
        int even = 0;
        for(int i = 0; i < nums.length; i++) {
            String s = Integer.toString(nums[i]);
            if(s.length()%2 == 0)
                even++;
        }
        return even;
    }
}