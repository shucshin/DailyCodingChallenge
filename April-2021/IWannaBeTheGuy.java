import java.util.*;

public class IWannaBeTheGuy {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String s = scan.nextLine();
        s = s.substring(1);
        String t = scan.nextLine();
        t = t.substring(1);
        s += t;

        for(int i = 1; i <= n; i++) {
            if(!(s.contains(Integer.toString(i)))){
                System.out.println("Oh, my keyboard!");
                return;
            }
        }
        System.out.println("I become the guy.");
    }
}