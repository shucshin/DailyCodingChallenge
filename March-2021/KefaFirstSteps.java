import java.util.*;

public class KefaFirstSteps {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] money = new int[n];
        for(int i = 0; i < n; i++) {
            money[i] = scan.nextInt();
        }

        int c = 1;
        int profit = 1;
        for(int i = 0; i < money.length-1; i++) {
            if(money[i] <= money[i+1]){
                c++;
                if(c > profit)
                    profit = c;
            }
            if(money[i] > money[i+1]){
                if(c > profit)
                    profit = c;
                c = 1;
            }
        }
        System.out.println(profit);
    }
}
