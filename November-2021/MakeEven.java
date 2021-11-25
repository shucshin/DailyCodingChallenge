import java.util.*;

public class MakeEven {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++) {
            long n = scan.nextLong();
            boolean isThereEven = false;
            String s = Long.toString(n);
            String[] ss = s.split("");
            for(int j = 0; j < s.length(); j++) {
                if(ss[j].contains("2") || ss[j].contains("4") || ss[j].contains("6") || ss[j].contains("8")) {
                    isThereEven = true;
                }
            }
            if(isThereEven == false) {
                System.out.println(-1);
                continue;
            }
            boolean firstEven = false, firstOdd = false;
            boolean lastEven = false, lastOdd = false;
            
            if(ss[0].contains("1") || ss[0].contains("3") || ss[0].contains("5") || ss[0].contains("7") || ss[0].contains("9"))
                firstOdd = true;
            else
                firstEven = true;
            if(ss[ss.length-1].contains("2") || ss[ss.length-1].contains("4") || ss[ss.length-1].contains("6") || ss[ss.length-1].contains("8"))
                lastEven = true;
            else
                lastOdd = true;
            if(lastEven == true)
                System.out.println(0);
            else if(firstOdd == true && lastOdd == true)
                System.out.println(2);
            else if(firstEven == true && lastOdd == true)
                System.out.println(1);
        }
    }
}