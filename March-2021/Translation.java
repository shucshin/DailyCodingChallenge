import java.util.*;

public class Translation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String t = scan.nextLine();
        String[] ss = s.split("");
        String[] tt = t.split("");

        for(int i = 0; i < ss.length; i++) {
            if(!(ss[i].equals(tt[tt.length-i-1]))){
                System.out.println("NO");
                System.exit(0);
            }
        }
        System.out.println("YES");
    }
}
