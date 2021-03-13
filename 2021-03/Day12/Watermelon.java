import java.util.*;

public class Watermelon{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int w = scan.nextInt();
        if(w == 2)
            System.out.print("NO");
        else if(w % 2 == 0)
            System.out.print("YES");
        else
            System.out.print("NO");
    }
}