import java.util.*;

public class TheatreSquare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = Long.parseLong(scan.next());
        long m = Long.parseLong(scan.next());
        long a = Long.parseLong(scan.next());

        int b = 0;
        int c = 0;

        if(n != a && n%a != 0)
            b = 1;
        if(m != a && m%a != 0)
            c = 1;
        
        n = (n/a)+b;
        m = (m/a)+c;

        System.out.println(n*m);
    }
}
