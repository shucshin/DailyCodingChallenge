import java.util.Arrays;

public class SquaresOfSortedArray {
    public static void main(String[] args) {
        int[] nums = {-4,-1,0,3,10};
        nums = sortedSquares(nums);
        System.out.print("[");
        for(int i = 0; i < nums.length; i++) {
            if(i == nums.length-1){
                System.out.print(nums[i]);
                continue;
            }
            System.out.print(nums[i] + ",");
        }
        System.out.println("]");

        int[] nums2 = {-7,-3,2,3,11};
        nums2 = sortedSquares(nums2);
        System.out.print("[");
        for(int i = 0; i < nums2.length; i++) {
            if(i == nums2.length-1){
                System.out.print(nums2[i]);
                continue;
            }
            System.out.print(nums2[i] + ",");
        }
        System.out.println("]");
    }

    public static int[] sortedSquares(int[] nums) {
        int[] squares = new int[nums.length];
        for(int i = 0; i < squares.length; i++) {
            squares[i] = (int)Math.pow(nums[i], 2);
        }
        Arrays.sort(squares);
        return squares;
    }
}