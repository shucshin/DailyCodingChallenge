import java.util.*;

public class CheckIfNDoubleExist {
    public static void main(String[] args) {
        int[] arr = {10,2,5,3};
        System.out.println(checkIfExist(arr));
        int[] arr2 = {7,1,14,11};
        System.out.println(checkIfExist(arr2));
        int[] arr3 = {3,1,7,11};
        System.out.println(checkIfExist(arr3));
    }

    private static boolean checkIfExist(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            for(int j = i+1; j < arr.length; j++) {
                if(arr[i] == arr[j]*2 || arr[i]*2 == arr[j])
                    return true;
            }
        }
        return false;
    }
}
