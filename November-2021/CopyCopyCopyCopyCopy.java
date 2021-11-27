import java.util.*;

public class CopyCopyCopyCopyCopy {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int ans = n;
            long[] nums = new long[n];
            for(int j = 0; j < n; j++) 
                nums[j] = scan.nextLong();
            Arrays.sort(nums);
            for(int j = 0; j < n-1; j++) {
                if(nums[j] == nums[j+1])
                    ans--;
            }
            System.out.println(ans);
        }
    }
}
