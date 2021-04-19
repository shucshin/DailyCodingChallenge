import java.util.*;

public class DivisibilityProblem {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            if(b > a){
                System.out.println(b-a);
                continue;
            }
            if(a%b == 0){
                System.out.println(0);
                continue;
            }
            System.out.println(b-(a%b));
        }
    }
}
