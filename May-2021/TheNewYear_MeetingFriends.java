import java.util.*;

public class TheNewYear_MeetingFriends {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] friends = new int[3];
        for(int i = 0; i < 3; i++) {
            friends[i] = scan.nextInt();
        }
        Arrays.sort(friends);
        int a = friends[1] - friends[0];
        int b = friends[2] - friends[1];
        System.out.println(a+b);
    }
}