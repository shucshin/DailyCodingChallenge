import java.util.*;

public class Tram {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int passengers = 0;
        int[] nums = new int[n];
        int a,b;
        for(int i = 0; i < n; i++){
            a = scan.nextInt();
            b = scan.nextInt();
            passengers += (b-a);
            nums[i] = passengers;
        }
        Arrays.sort(nums);
        System.out.println(nums[nums.length-1]);
    }
}
