import java.util.*;

public class InSearchEasyProblem {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String s = "";
        for(int i = 0; i < n; i++) {
            int j = scan.nextInt();
            s += j;
        }
        if(s.contains("1"))
            System.out.println("HARD");
        else
            System.out.println("EASY");
        
    }
}
