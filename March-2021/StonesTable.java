import java.util.*;

public class StonesTable {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String s = scan.nextLine();
        String[] stones = s.split("");
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(stones[i].equals(stones[i+1]))
                count++;
        }
        System.out.println(count);
    }
}
