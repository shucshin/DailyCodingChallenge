import java.util.*;

public class InsomniaCure {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int k = scan.nextInt();
        int l = scan.nextInt();
        int m = scan.nextInt();
        int n = scan.nextInt();
        int d = scan.nextInt();
        int dragons = 0;

        for(int i = 1; i <= d; i++){
            if(i%k == 0){
                dragons++;
                continue;
            }
            if(i%l == 0){
                dragons++;
                continue;
            }
            if(i%m == 0){
                dragons++;
                continue;
            }
            if(i%n == 0){
                dragons++;
                continue;
            }
        }
        System.out.println(dragons);
    }
}
