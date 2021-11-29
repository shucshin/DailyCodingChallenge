import java.util.*;

public class CasimirStringSolitaire {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for(int i = 0; i < t; i++) {
            String s = scan.nextLine();
            String[] letters = s.split("");
            if(letters.length%2 != 0) {
                System.out.println("NO");
                continue;
            }
            int A = 0, B = 0, C = 0;
            for(int j = 0; j < letters.length; j++) {
                if(letters[j].equals("A"))
                    A++;
                if(letters[j].equals("B"))
                    B++;
                if(letters[j].equals("C"))
                    C++;
            }
            if(A+C == B)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}