import java.util.*;

public class SquareString {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for(int i = 0; i < t; i++) {
            String[] words = scan.nextLine().split("");
            if(words.length%2 != 0) {
                System.out.println("NO");
                continue;
            }
            boolean skip = false;
            for(int j = 0; j < words.length/2; j++) {
                if(!words[j].equals(words[words.length/2+j])) {
                    System.out.println("NO");
                    skip = true;
                    break;
                }
            }
            if(skip == false)
                System.out.println("YES");
        }
    }
}
