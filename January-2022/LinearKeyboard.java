import java.util.*;

public class LinearKeyboard {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for(int i = 0; i < t; i++) {
            String[] alphabet = scan.nextLine().split("");
            String[] word = scan.nextLine().split("");
            int ans = 0;
            for(int j = 0; j < word.length-1; j++) {
                int a = 0, b = 0;
                for(int k = 0; k < alphabet.length; k++) {
                    if(word[j].equals(alphabet[k]))
                        a = k;
                }
                for(int k = 0; k < alphabet.length; k++) {
                    if(word[j+1].equals(alphabet[k]))
                        b = k;
                }
                ans += Math.abs(a - b);
            }
            System.out.println(ans);
        }
    }
}