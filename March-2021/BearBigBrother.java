import java.util.*;

public class BearBigBrother {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int Limak = scan.nextInt();
        int Bob = scan.nextInt();
        int years = 0;
        while(Limak <= Bob){
            Limak *= 3;
            Bob *= 2;
            years++;
        }
        System.out.println(years);
    }
}
