import java.util.*;

public class PetyaStrings {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        String b = scan.nextLine();
        a = a.toLowerCase();
        b = b.toLowerCase();
        if(a.compareTo(b) < 0)
            System.out.println(-1);
        else if(a.compareTo(b) > 0)
            System.out.println(1);
        else
            System.out.println(0);
    }
}
