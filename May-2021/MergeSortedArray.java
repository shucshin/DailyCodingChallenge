import java.util.*;

public class MergeSortedArray {
    public static void main(String[] args) {
        int[] nums1 = {1,2,3,0,0,0};
        int m = 3;
        int[] nums2 = {2,5,6};
        int n = 3;
        merge(nums1, m, nums2, n);
        System.out.print("[");
        for(int i = 0; i < nums1.length; i++) {
            if(i == nums1.length-1){
                System.out.print(nums1[i]);
                continue;
            }
            System.out.print(nums1[i] + ",");
        }
        System.out.println("]");
    }

    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        int j = 0;
        for(int i = 0; i < m+n; i++) {
            if(i < m)
                continue;
            else{
                nums1[i] = nums2[j];
                j++;
            }
        }
        Arrays.sort(nums1);
    }
}