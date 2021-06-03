import java.util.*;

public class TeamOlympiad {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        int programming = 0, math = 0, PE = 0;
        for(int i = 0; i < n; i++) {
            nums[i] = scan.nextInt();
            if(nums[i] == 1)
                programming++;
            if(nums[i] == 2)
                math++;
            if(nums[i] == 3)
                PE++;
        }
        int teams = minimum(programming, math, PE);
        System.out.println(teams);
        if(teams == 0)
            return;
        for(int i = 0; i < teams; i++) {
            for(int j = 0; j < nums.length; j++) {
                if(nums[j] == 1){
                    System.out.print(j+1 + " ");
                    nums[j] = 0;
                    break;
                }
            }
            for(int j = 0; j < nums.length; j++) {
                if(nums[j] == 2){
                    System.out.print(j+1 + " ");
                    nums[j] = 0;
                    break;
                }
            }
            for(int j = 0; j < nums.length; j++) {
                if(nums[j] == 3){
                    System.out.println(j+1);
                    nums[j] = 0;
                    break;
                }
            }
        }
    }

    private static int minimum(int programming, int math, int PE) {
        int teams = programming;
        if(teams > math)
            teams = math;
        if(teams > PE)
            teams = PE;
        return teams;
    }    
}
