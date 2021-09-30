import java.util.*;

public class RestorePermutationMerger {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            ArrayList<Integer> nums = new ArrayList<Integer>();
            for(int j = 0; j < 2*n; j++) {
                int a = scan.nextInt();
                if(!nums.contains(a))
                    nums.add(a);
            }
            for(int j = 0; j < n; j++) {
                if(j == n-1){
                    System.out.println(nums.get(j));
                    break;
                }
                System.out.print(nums.get(j) + " ");
            }
        }
    }
}