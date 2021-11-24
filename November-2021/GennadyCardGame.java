import java.util.*;

public class GennadyCardGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        String b = scan.nextLine();
        a = a.replaceAll(" ", "");
        b = b.replaceAll(" ", "");
        String[] aa = a.split("");
        String[] bb = b.split("");
        for(int i = 0; i < aa.length; i++) {
            for(int j = 0; j < bb.length; j++) {
                if(aa[i].equals(bb[j])) {
                    System.out.println("YES");
                    return;
                }
            }
        }
        System.out.println("NO");        
    }
}