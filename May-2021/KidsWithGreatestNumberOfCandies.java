import java.util.*;

public class KidsWithGreatestNumberOfCandies {
    public static void main(String[] args) {
        int[] candies = {2,3,5,1,3};
        int extraCandies = 3;
        List<Boolean> sourPatch = kidsWithCandies(candies, extraCandies);

        System.out.print("[");
        for(int i = 0; i < candies.length; i++) {
            if(i == candies.length-1){
                System.out.print(sourPatch.get(i));
                break;
            }
            System.out.print(sourPatch.get(i) + ",");
        }
        System.out.print("]\n");
    }

    public static List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> sourPatch = new ArrayList<Boolean>();

        int max = 0;
        for(int i = 0; i < candies.length; i++) {
            if(candies[i] > max)
                max = candies[i];
        }

        for(int i = 0; i < candies.length; i++) {
            if(candies[i]+extraCandies >= max)
                sourPatch.add(true);
            else
                sourPatch.add(false);
        }
        return sourPatch;
    }

}
