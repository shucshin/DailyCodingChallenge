import java.util.*;

public class NextRound {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int nextRound = 0;
        scan.nextLine();

        int[] contestants = new int[n];

        for(int i = 0; i < n; i++){
            contestants[i] = scan.nextInt();
        }
        for(int j = 0; j < n; j++){
            if (contestants[j] <= 0)
                continue;
            if(contestants[j] >= contestants[k-1])
                nextRound++;
        }
        System.out.println(nextRound);
    }
}
