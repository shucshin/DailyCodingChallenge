import java.util.*;

public class Team {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int i = 0;
        int r = 0;
        String s;
        scan.nextLine();
        while(i < n){
            s = scan.nextLine();
            if(s.contains("1 1") || s.contains("1 0 1"))
                r++;
            i++;
        }
        System.out.println(r);
    }
}
