import java.util.*;

public class AntonDanik {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String s = scan.nextLine();
        String[] games = s.split("");
        int A = 0;
        int D = 0;

        for(int i = 0; i < n; i++){
            if(games[i].contains("A"))
                A++;
            if(games[i].contains("D"))
                D++;
        }
        if(A > D)
            System.out.println("Anton");
        if(D > A)
            System.out.println("Danik");
        if(A == D)
            System.out.println("Friendship");
    }
}