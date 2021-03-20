import java.util.*;

public class WrongSubstraction {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        for(int i = 0; i < k; i++){
            if(n%10 == 0)
                n /= 10;
            else
                n--;
        }
        System.out.println(n);
    }
}
