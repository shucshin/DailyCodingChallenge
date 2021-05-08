import java.util.*;

public class I_love_username {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];

        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
        }

        int amazing = 0;
        int max = nums[0];
        int min = nums[0];

        for(int j = 1; j < n; j++) {
            if(nums[j] > max){
                max = nums[j];
                amazing++;
            }
            if(nums[j] < min){
                min = nums[j];
                amazing++;
            }
        }
        System.out.println(amazing);
    }
}
