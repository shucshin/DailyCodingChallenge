import java.util.*;

public class K_GoodnessString {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        
        for(int i = 0; i < t; i++){
            int n = scan.nextInt();
            int k = scan.nextInt();
            scan.nextLine();
            String s = scan.nextLine();
            String[] string = s.split("");
            int score = 0;
            for(int j = 0; j < n/2; j++){
                if(!(string[j].equals(string[n-j-1]))){
                    score++;
                }
            }
            System.out.printf("Case #%d: " + Math.abs(k-score) + "\n", i+1);
        }
    }
}
