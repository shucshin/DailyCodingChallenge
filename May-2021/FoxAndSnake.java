import java.util.*;

public class FoxAndSnake {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        boolean front = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i%2 == 0){
                    System.out.print("#");
                }
                else if(front == false){
                    if(j == m-1){
                        System.out.print("#");
                        front = true;
                    }
                    else
                        System.out.print(".");
                }
                else if(front == true){
                    if(j == 0)
                        System.out.print("#");
                    else if(j == m-1){
                        System.out.print(".");
                        front = false;
                    }
                    else
                        System.out.print(".");
                }
            }
            System.out.println();
        }
    }
}
