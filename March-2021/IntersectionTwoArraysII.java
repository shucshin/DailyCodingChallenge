import java.util.*;

public class IntersectionTwoArraysII {
    public static void main(String[] args) {
        int[] nums1 = {1,2,2,1};
        int[] nums2 = {2,2};
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
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        for(int i = 0, j = 0; i < nums1.length && j < nums2.length;){
            if(nums1[i] == nums2[j]){
                intersection.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
                j++;
            else
                i++;
        }

        int[] result = new int[intersection.size()];
        for(int i = 0; i < intersection.size(); i++){
            result[i] = intersection.get(i);
        }
        return result;
    }
}
