import java.util.*;

public class PlusOne {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] digits = {9,9};
        plusOne(digits);
        System.out.print("[");
        for(int i = 0; i < digits.length; i++) {
            System.out.print(digits[i]);
            if(i < digits.length-1)
                System.out.print(",");
        }
        System.out.println("]"); 
    }

    public static int[] plusOne(int[] digits) {
        for(int i = digits.length-1; i >=0; i--) {
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        int[] plusOne = new int[digits.length+1];
        plusOne[0] = 1;
        return plusOne;
    }
}
