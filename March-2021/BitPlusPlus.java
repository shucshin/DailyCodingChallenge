import java.util.*;

public class BitPlusPlus {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        int x = 0;
        scan.nextLine();
        for(int j = 0; j < i; j++){
            String now = scan.nextLine();
            if(now.contains("++"))
                x++;
            if(now.contains("--"))
                x--;
        }
        System.out.println(x);
    }
}