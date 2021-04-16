import java.util.*;

public class IsYourHorseshoeOnTheOtherHoof {
    public static void main(String [] args) {
        Scanner scan = new Scanner(System.in);
        String[] s = scan.nextLine().split(" ");
        int ans = 0;
        for(int i = 0; i < s.length-1; i++){
            for(int j = i+1; j < s.length; j++){
                if(s[i].equals(s[j])){
                    ans++;
                    break;
                }
            }  
        }
        System.out.println(ans);
    }
}