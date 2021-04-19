import java.util.*;

public class IncreasingSubstring {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++){
            int n = scan.nextInt();
            scan.nextLine();
            String[] s = scan.nextLine().split("");

            System.out.printf("Case #%d: ", i+1);
            int c = 0;
            for(int j = 0; j < n; j++){
                if(j == 0){
                    c++;
                    System.out.print(c + " ");
                    continue;
                }
                if(s[j].compareTo(s[j-1]) > 0){
                    c++;
                    if(j == n-1){
                        System.out.print(c);
                        continue;
                    }
                    System.out.print(c + " ");
                }
                else{
                    c = 1;
                    if(j == n-1){
                        System.out.print(c);
                        continue;
                    }
                    System.out.print(c + " ");
                }
            }
            System.out.println();
        }
    }
}
