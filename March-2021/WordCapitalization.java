import java.util.*;

public class WordCapitalization {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String cap = s.substring(0,1).toUpperCase() + s.substring(1);
        System.out.println(cap);
    }
}
