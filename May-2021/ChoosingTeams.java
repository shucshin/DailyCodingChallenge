import java.util.*;

public class ChoosingTeams {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt() + k;
        }

        int participate = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] <= 5)
                participate++;
        }
        System.out.println(participate/3);
    }
}