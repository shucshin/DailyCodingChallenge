import java.util.*;

public class YetAnotherTwoIntegersProblem {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            System.out.println(Moves(a, b));
        }
    }

    private static int Moves(int a, int b) {
        int diff = Math.abs(a-b);
        if(diff%10 == 0)
            return diff/10;
        else
            return (diff/10)+1;
    }
}