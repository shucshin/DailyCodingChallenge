import java.util.*;

public class Hulk {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String s = "";
        for(int i = 0; i < n; i++) {
            if(i%2 == 0)
                s += "I hate ";
            if(i%2 != 0)
                s += "I love ";
            if(i == n-1)
                s += "it";
            if(i != n-1)
                s += "that ";
        }
        System.out.println(s);
    }
}
