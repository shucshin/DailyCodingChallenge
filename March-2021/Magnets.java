import java.util.*;

public class Magnets {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] magnet = new int[n];
        int groups = 1;

        for(int i = 0; i < n; i++) {
            magnet[i] = scan.nextInt();
        }

        for(int i = 1; i < n; i++) {
            if(magnet[i] != magnet[i-1])
                groups++;
        }
        System.out.println(groups);

    }
}
