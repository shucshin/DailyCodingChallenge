import java.util.*;

public class ArrivalGeneral {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
        }

        int[] sorted = new int[n];
        for(int i = 0; i < n; i++){
            sorted[i] = nums[i];
        }
        Arrays.sort(sorted);

        int min = sorted[0];
        int max = sorted[sorted.length-1];

        int indexMin = 0;
        int indexMax = 0;
        
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == min)
                indexMin = i;
        }
        for(int i = nums.length-1; i >= 0; i--){
            if(nums[i] == max)
                indexMax = i;
        }

        int ans = indexMax + (n-1) - indexMin;
        if(indexMin < indexMax)
            ans--;
        System.out.println(ans);
    }
}