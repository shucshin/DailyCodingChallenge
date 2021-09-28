import java.util.*;

public class BlackSquare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a1 = scan.nextInt();
        int a2 = scan.nextInt();
        int a3 = scan.nextInt();
        int a4 = scan.nextInt();
        scan.nextLine();
        String s = scan.nextLine();
        String[] nums = s.split("");
        int ans = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i].equals("1"))
                ans += a1;
            else if(nums[i].equals("2"))
                ans += a2;
            else if(nums[i].equals("3"))
                ans += a3;
            else
                ans += a4;
        }
        System.out.println(ans);
    }
}