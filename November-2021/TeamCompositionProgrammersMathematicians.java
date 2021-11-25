import java.util.*;

public class TeamCompositionProgrammersMathematicians {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            long a = scan.nextLong();
            long b = scan.nextLong();
            long ans = (a+b)/4;
            long min = Math.min(a, b);
            if(min < ans)
                System.out.println(min);
            else
                System.out.println(ans);
        }
    }
}
