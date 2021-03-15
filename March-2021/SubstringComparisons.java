import java.util.Scanner;

public class SubstringComparisons {
    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";

        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        String[] split = s.split("");
        String[] subStrings = new String[s.length()-(k-1)];
        int j = 0;
        for(int i = 0; i < s.length()-(k-1); i++){
            String str = "";
            while(j < k+i){
                str += split[j];
                j++;
            }
            subStrings[i] = str;
            j = j - (k-1);
        }
        smallest = subStrings[0];
        largest = subStrings[0];

        for(int l = 0; l < subStrings.length-1; l++){
            if(subStrings[l+1].compareTo(smallest) < 0)
                smallest = subStrings[l+1];
            if(subStrings[l+1].compareTo(largest) > 0)
                largest = subStrings[l+1];
        }
        return smallest + "\n" + largest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
