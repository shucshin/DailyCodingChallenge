import java.util.*;

public class HitTheLottery {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int c = 0;
        while(n > 0){
            if(n >= 100){
                n -= 100;
                c++;
                continue;
            }
            if(n >= 20){
                n -= 20;
                c++;
                continue;
            }
            if(n >= 10){
                n -= 10;
                c++;
                continue;
            }
            if(n >= 5){
                n -= 5;
                c++;
                continue;
            }
            if(n >= 1){
                n--;
                c++;
                continue;
            }
        }
        System.out.println(c);
    }
}
