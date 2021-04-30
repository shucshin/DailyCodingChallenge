import java.util.*;

public class AmusingJoke {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.nextLine();
        String b = scan.nextLine();
        String[] c = (a+b).split("");
        String[] d = scan.nextLine().split("");

        Arrays.sort(c);
        Arrays.sort(d);

        for(int i = 0; i < c.length; i++){
            if(!(c[i].equals(d[i])) || c.length != d.length){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}
