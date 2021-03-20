import java.util.*;

public class SecondLargestDigit {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        System.out.println(secondHighest(s));
    }

    public static int secondHighest(String s) {
        String[] second = s.split("");
        int j = 0;

        for(int i = 0; i < second.length; i++){
            if(second[i].matches("\\d"))
                j++;
        }

        int[] ans = new int[j];
        int c = 0;

        Arrays.sort(second, Collections.reverseOrder());

        for(int i = 0; i < second.length; i++){
            if(second[i].matches("[a-z]"))
                continue;
            if(second[i].matches("\\d")){
                ans[c] = Integer.parseInt(second[i]);
                c++;
            }
        }

        int temp = 1;
        for(int i = 0; i < ans.length-1; i++){
            if(ans[i] != ans[i+1]){
                ans[temp] = ans[i+1];
                temp++;
            }
        }
        
        if(temp <= 1)
            return -1;
        return ans[1];
    }
}
