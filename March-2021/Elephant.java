import java.util.*;

public class Elephant {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        if(x <= 5)
            System.out.println(1);
        if(x > 5){
            if(x%5 == 0){
                System.out.println(x/5);
                return;
            }
            System.out.println(x/5 + 1);
        }
    }
}
