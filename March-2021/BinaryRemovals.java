import java.util.*;

public class BinaryRemovals {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for(int i = 0; i < t; i++){
            String s = scan.nextLine();
            if((s.contains("11") && s.contains("00")) && (s.indexOf("11") < s.lastIndexOf("00")))
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}
