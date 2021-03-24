import java.util.*;

public class BeautifulYear {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int y = scan.nextInt();
        
        while(true){
            y++;
            String s = Integer.toString(y);

            int one = Character.getNumericValue(s.charAt(0));
            int two = Character.getNumericValue(s.charAt(1));
            int three = Character.getNumericValue(s.charAt(2));
            int four = Character.getNumericValue(s.charAt(3));

            HashSet<Integer> hset = new HashSet<Integer>();
            hset.add(one);
            hset.add(two);
            hset.add(three);
            hset.add(four);

            if(hset.size() == 4){
                System.out.println(y);
                return;
            }
        }
    }
}
