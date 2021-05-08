import java.util.*;

public class VanyaTheHipster {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();

        int days = Math.min(a, b);
        int max = Math.max(a, b);

        int remaining = max - days;
        int same = remaining/2;

        System.out.print(days + " " + same);
    }
}
