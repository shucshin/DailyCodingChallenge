import java.util.*;

public class Twins {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int[] coins = new int[n];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            coins[i] = scan.nextInt();
            sum += coins[i];
        }

        Arrays.sort(coins);

        int taken = 0;
        int c = 0;
        
        for(int i = coins.length-1; i >= 0; i--){
            taken += coins[i];
            c++;
            if(taken > sum/2){
                System.out.println(c);
                break;
            }
        }
    }
}
