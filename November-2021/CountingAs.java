import java.util.*;

public class CountingAs {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        s = s.replaceAll("[^a]", "");
        long a = s.length();
        System.out.println(a);
    }
}
