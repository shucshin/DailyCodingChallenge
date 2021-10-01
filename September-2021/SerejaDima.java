import java.util.*;

public class SerejaDima {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] nums = new int[n];
        for(int i = 0; i < n; i++)
            nums[i] = scan.nextInt();
        int Sereja = 0;
        int Dima = 0;
        int sd = 0;
        int a = 0, b = n-1;
        for(int i = 0; i < n; i++) {
            if(nums[a] > nums[b]) {
                if(sd == 0){
                    Sereja += nums[a];
                    sd = 1;
                }
                else {
                    Dima += nums[a];
                    sd = 0;
                }
                a++;
            }
            else {
                if(sd == 0){
                    Sereja += nums[b];
                    sd = 1;
                }
                else {
                    Dima += nums[b];
                    sd = 0;
                }
                b--;
            }
        }
        System.out.println(Sereja + " " + Dima);
    }
}
