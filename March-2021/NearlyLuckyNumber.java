import java.util.*;

public class NearlyLuckyNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String n = scan.nextLine();
        String[] number = n.split("");
        int luckyCounter = 0;

        for(int i = 0; i < number.length; i++) {
            if(number[i].equals("4") || number[i].equals("7"))
                luckyCounter++;
        }
        String numberCount = Integer.toString(luckyCounter);

        if(!(numberCount.contains("4") || numberCount.contains("7"))){
            System.out.println("NO");
            System.exit(0);
        }
        System.out.println("YES");
    }
}
