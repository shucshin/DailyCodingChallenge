import java.util.*;

public class MinimalSquare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            System.out.println(square(a,b));
        }
    }

    private static int square(int a, int b) {
        int x = a*2;
        int y = b*2;
        if(x > y){
            if(a > y)
                return a*a;
            else
                return y*y;
        }
        else{
            if(b > x)
                return b*b;
            else
                return x*x;
        }
    }
}
