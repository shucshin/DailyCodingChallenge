import java.util.*;

public class Puzzles {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        ArrayList<Integer> nums = new ArrayList<Integer>();

        for(int i = 0; i < m; i++){
            nums.add(i, scan.nextInt());
        }
        Collections.sort(nums);

        for(int j = 0; j < m-n; j+=2){
            nums.remove(m-1-j);
            nums.remove(0);
        }

        int ans = nums.get(n-1) - nums.get(0);
        System.out.println(ans);
    }
}