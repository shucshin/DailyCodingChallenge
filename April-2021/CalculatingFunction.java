import java.util.*;

public class CalculatingFunction {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = Long.parseLong(scan.next());
        if(n%2 == 1)
            System.out.println(-(n/2+1));
        if(n%2 == 0)
            System.out.println(n/2);
    }
}