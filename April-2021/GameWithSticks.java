import java.util.*;

public class GameWithSticks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int min = Math.min(n, m);
        if(min%2 == 1)
            System.out.println("Akshat");
        else
            System.out.println("Malvika");
    }
}
