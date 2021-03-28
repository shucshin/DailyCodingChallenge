import java.util.*;

public class Dubstep {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        s = s.replaceAll("WUB", " ");
        s = s.trim();
        System.out.println(s);
    }
}
