import java.util.*;

public class QueueSchool {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int t = scan.nextInt();
        String s = scan.next();
        String[] queue = s.split("");

        for(int i = 0; i < t; i++){
            for(int j = 0; j < n-1; j++){
                if(queue[j].equals("B") && queue[j+1].equals("G")){
                    String temp = queue[j];
                    queue[j] = queue[j+1];
                    queue[j+1] = temp;
                    j++;
                }
            }
        }
        StringBuffer sb = new StringBuffer();
        for(int i = 0; i < queue.length; i++){
            sb.append(queue[i]);
        }
        String a = sb.toString();
        System.out.println(a);
    }
}
