import java.util.*;

public class DesignTutorial_LearnFromMath {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        if(n%2 == 0){
            int a = n/2;
            int b = n/2;
            while(isComposite(a) == false || isComposite(b) == false ){
                a++;
                b--;
            }
            System.out.println(a + " " + b);
        }
            
        else{
            int a = (n/2) + 1;
            int b = (n/2);
            while(isComposite(a) == false || isComposite(b) == false ){
                a++;
                b--;
            }
            System.out.println(a + " " + b);
        }
    }

    private static boolean isComposite(int n) {
        if(n%2 == 0 || n%3 == 0)
            return true;
        for(int i = 5; i*i <= n; i+=6) {
            if(n%i == 0 || n % (i+2) == 0)
                return true;
        }
        return false;
    }
}