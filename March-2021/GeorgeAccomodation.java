import java.util.*;

public class GeorgeAccomodation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int room = 0;
        for(int i = 0; i < n; i++) {
            int p = scan.nextInt();
            int q = scan.nextInt();
            if(p < q-1)
                room++;
        }
        System.out.println(room);
    }
}
