import java.util.*;

public class ArrayPeaks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int k = scan.nextInt();
            if(k > (n-1)/2){
                System.out.println(-1);
                continue;
            }

            int[] nums = new int[n];
            for(int j = 0; j < n; j++) {
                nums[j] = j+1;
            }

            for(int l = 0; l < k*2; l+=2) {
                int temp = nums[l+1];
                nums[l+1] = nums[l+2];
                nums[l+2] = temp;
            }

            for(int m = 0; m < nums.length; m++){
                System.out.print(nums[m] + " ");
            }
            System.out.println();
        }
    }
}
