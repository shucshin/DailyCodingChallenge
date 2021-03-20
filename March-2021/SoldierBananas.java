import java.util.*;

public class SoldierBananas {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        int n = scan.nextInt();
        int w = scan.nextInt();
        int cost = 0;
        for(int i = 0; i < w; i++){
            cost += k*(i+1);
        }
        if(cost-n < 0){
            System.out.println(0);
            System.exit(0);
        }
        System.out.println(cost-n);
    }
}
