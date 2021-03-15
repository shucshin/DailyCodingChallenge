import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Arraylist {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        ArrayList<ArrayList<Integer>> array = new ArrayList<>(n);
        scan.nextLine();
        for(int i = 0; i < n; i++){
            String m = scan.nextLine();
            String[] numbers = m.split(" ");
            int d = Integer.parseInt(numbers[0]);
            array.add(new ArrayList());

            for(int j = 0; j < d; j++){
                array.get(i).add(Integer.parseInt(numbers[j+1]));
            }   
        }
        int q = scan.nextInt();
        
        for(int k = 0; k < q; k++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            try{
                System.out.println(array.get(x-1).get(y-1));
            }catch(Exception e){
                System.out.println("ERROR!");
            }
        }
        
        /* ==Failed 1st try, inefficient==
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[][] array = new int[n][100];
        scan.nextLine();
        for(int i = 0; i < n; i++){
            String m = scan.nextLine();
            String[] numbers = m.split(" ");
            int d = Integer.parseInt(numbers[0]);

            for(int j = 0; j < d; j++){
                array[i][j] = Integer.parseInt(numbers[j+1]);
            }
        }
        int q = scan.nextInt();
        
        for(int k = 0; k < q; k++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            if(array[x-1][y-1] == 0){
                System.out.println("ERROR!");
                continue;
            }
            System.out.println(array[x-1][y-1]);
        }*/
    }
}
