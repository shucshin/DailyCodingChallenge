import java.util.*;

public class Drinks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        float sum = 0;

        for(int i = 0; i < n; i++) {
            sum += scan.nextInt();
        }
        System.out.println(sum/n);
    }
}
