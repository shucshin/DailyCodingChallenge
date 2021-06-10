import java.util.*;

public class EvenArray {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] nums = new int[n];
            for(int j = 0; j < n; j++) {
                nums[j] = scan.nextInt();
            }
            System.out.println(evenArray(nums));
        }  
    }

    private static int evenArray(int[] nums) {
        int even = 0;
        int odd = 0;
        for(int i = 0; i < nums.length; i++) {
            if(i%2 == 0 && nums[i]%2 != 0)
                even++;
            if(i%2 == 1 && nums[i]%2 != 1) 
                odd++;
        }
        if(even != odd)
            return -1;
        else
            return even;
    }
}
