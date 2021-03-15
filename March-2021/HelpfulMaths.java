import java.util.*;

public class HelpfulMaths {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String[] sum = s.split("");

        for(int i = 0; i < sum.length; i += 2){
            for(int j = 0; j < sum.length-1-i; j += 2){
                if(sum[j].compareTo(sum[j+2]) > 0){
                    String temp = sum[j];
                    sum[j] = sum[j+2];
                    sum[j+2] = temp;
                }
            }
        }
        StringBuffer sb = new StringBuffer();
        for(int i = 0; i < sum.length; i++){
            sb.append(sum[i]);
        }
        String answer = sb.toString();
        System.out.println(answer);
    }
}
