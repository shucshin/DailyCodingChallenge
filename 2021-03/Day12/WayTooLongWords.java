import java.util.*;

public class WayTooLongWords {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        int i = 0;
        String s;
        while(i < n){
            s = scan.nextLine();
            if(s.length() <= 10)
                System.out.println(s);
            if(s.length() > 10){
                System.out.printf("%s%d%s\n",s.charAt(0), (s.length()-2),s.charAt(s.length()-1));
            }
            i++;
        }

    }
}

