import java.util.*;

public class NightAtMuseum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        int ans = 0;
        String[] letters = s.split("");
        int left, right;
        left = "a".compareTo(letters[0]);
        right = letters[0].compareTo("a");
        if(left < 0)
            left += 26;
        if(right < 0)
            right += 26;
        int min = Math.min(left, right);
        ans += min;
        for(int i = 0; i < letters.length-1; i++) {
            left = letters[i].compareTo(letters[i+1]);
            right = letters[i+1].compareTo(letters[i]);
            if(left < 0)
                left += 26;
            if(right < 0)
                right += 26;
            min = Math.min(left, right);
            ans += min;
        }
        System.out.println(ans);
    }
}
