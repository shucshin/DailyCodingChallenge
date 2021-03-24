import java.util.*;

public class VanyaFence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int h = scan.nextInt();
        int width = n;

        for(int i = 0; i < n; i++) {
            int a = scan.nextInt();
            if(a > h)
                width++;
        }
        System.out.println(width);
    }
}
