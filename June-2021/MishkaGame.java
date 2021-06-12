import java.util.*;

public class MishkaGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int Mishka = 0, Chris = 0;
        for(int i = 0; i < n; i++) {
            int m = scan.nextInt();
            int c = scan.nextInt();
            if(m > c)
                Mishka++;
            if(m < c)
                Chris++;
        }
        if(Mishka > Chris)
            System.out.println("Mishka");
        else if(Mishka < Chris)
            System.out.println("Chris");
        else
            System.out.println("Friendship is magic!^^");
    } 
}
