import java.util.*;

public class Pangram {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String[] s = scan.nextLine().toLowerCase().split("");
        HashSet<String> letters = new HashSet<String>();
        for(int i = 0; i < n; i ++){
            if(!(letters.contains(s[i])))
                letters.add(s[i]);
        }
        if(letters.size() >= 26)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
