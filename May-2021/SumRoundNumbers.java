import java.util.*;

public class SumRoundNumbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int ten = 1;

            int c = 0;
            String[] num = Integer.toString(n).split("");
            for(int j = 0; j < num.length; j++) {
                if(num[j].equals("0"))
                    continue;
                else
                    c++;
            }
            System.out.println(c);

            while(n > 0){
                if(n%10 == 0){
                    ten *= 10;
                    n /= 10;
                    continue;
                }
                System.out.printf("%d ", (n%10)*ten);
                ten *= 10;
                n /= 10;
            }
            System.out.println();
        }
    }

    
}