import java.util.*;

public class IntersectionTwoArraysII {
    public static void main(String[] args) {
        int[] nums1 = {1,2,2,1};
        int[] nums2 = {2};
        int[] ans = intersect(nums1, nums2);
        System.out.print("[");
        for(int i = 0; i < ans.length; i++){
            System.out.print(ans[i]);
            if(i < ans.length-1)
                System.out.print(",");
        }
        System.out.println("]");

        
    }

    public static int[] intersect(int[] nums1, int[] nums2) {
        ArrayList<Integer> intersection = new ArrayList<Integer>();
        

        for(int i = 0; i < nums1.length; i++){
            for(int j = 0; j < nums2.length; j++){
                if(nums1[i] == nums2[j]){
                    intersection.add(nums1[i]);
                    break;
                }
            }
        }
        int[] result = new int[intersection.size()];
        for(int i = 0; i < intersection.size(); i++){
            result[i] = intersection.get(i);
        }
        return result;
    }
}
