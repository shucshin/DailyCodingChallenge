import java.util.*;

public class StoneGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[] nums = new int[n];
            int max = 0, min = 999999;
            int maxIndex = 0, minIndex = 0;
            for(int j = 0; j < n; j++) {
                nums[j] = scan.nextInt();
                if(max < nums[j]) {
                    max = nums[j];
                    maxIndex = j;
                }
                if(min > nums[j]) {
                    min = nums[j];
                    minIndex = j;
                }
            }
            System.out.println(stone(n, maxIndex, minIndex));
        }
    }

    private static int stone(int n, int i, int j) {
        int movesI = 0, movesJ = 0;
        if(i >= n/2)
            movesI = n-i;
        else
            movesI = i+1;
        if(j >= n/2)
            movesJ = n-j;
        else
            movesJ = j+1;
        int case1 = movesI + movesJ;
        int case2 = Math.max(i,j)+1;
        int case3 = n-Math.min(i,j);
        int min = Math.min(case1, case2);
        int min2 = Math.min(min, case3);
        return min2;
    }
}
