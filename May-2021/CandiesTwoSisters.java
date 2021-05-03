import java.util.*;

public class CandiesTwoSisters {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++){
            int n = scan.nextInt();
            if(n%2 == 0)
                System.out.println(n/2 - 1);
            else
                System.out.println(n/2);
        }
        
    }
}
