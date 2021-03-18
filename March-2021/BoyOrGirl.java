import java.util.*;

public class BoyOrGirl {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String[] distinct = s.split("");
        Arrays.sort(distinct);
        int ans = 1;
        for(int i = 0; i < distinct.length-1; i++){
            if(!distinct[i].equals(distinct[i+1]))
                ans++;
        }
        if(ans%2 == 1)
            System.out.println("IGNORE HIM!");
        else
            System.out.println("CHAT WITH HER!");
    }
}
