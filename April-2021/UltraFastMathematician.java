import java.util.*;

public class UltraFastMathematician {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        String b = scan.nextLine();
        String[] nums = a.split("");
        String[] nums2 = b.split("");

        String ans = "";
        for(int i = 0; i < nums.length; i++) {
            if((nums[i].equals("0") && nums2[i].equals("0")) || (nums[i].equals("1") && nums2[i].equals("1")))
                ans += "0";
            else
                ans += "1";
        }
        System.out.println(ans);
    }
}
