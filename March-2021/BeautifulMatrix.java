import java.util.*;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int row = 0, column = 0;
        for(int i = 1; i < 6; i++){
            for(int j = 1; j < 6; j++){
                if(scan.nextInt() == 1){
                    row = i;
                    column = j;
                }
            }
        }
        int iMoves = Math.abs(row-3);
        int jMoves = Math.abs(column-3);
        System.out.println(iMoves + jMoves);
    }
}
