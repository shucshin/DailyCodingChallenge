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
        int min = nums.get(n-1) - nums.get(0);

        for(int j = 0; j < m-n+1; j++){
            if(min > nums.get(n-1+j) - nums.get(j))
                min = nums.get(n-1+j) - nums.get(j);
        }
        System.out.println(min);
    }
}