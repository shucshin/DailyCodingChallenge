import java.util.*;

public class EvenOdds {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = Long.parseLong(scan.next());
        long k = Long.parseLong(scan.next());
        long d = n/2;

        if(n % 2 == 1)
            d++;
        if(k <= d)
            System.out.println(1 + ((k-1)*2));
        else
            System.out.println((k-d)*2);
    }
}