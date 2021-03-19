import java.util.Scanner;

public class Anagrams {
    static boolean isAnagram(String a, String b) {
        // Complete the function
        String aLow = a.toLowerCase();
        String bLow = b.toLowerCase();
        String[] aa = aLow.split("");
        String[] bb = bLow.split("");
        if(aa.length != bb.length)
            return false;

        for(int i = 0; i < aa.length-1; i++){
            for(int j = 0; j < aa.length-i-1; j++){
                if(aa[j].compareTo(aa[j+1]) > 0){
                    String temp = aa[j];
                    aa[j] = aa[j+1];
                    aa[j+1] = temp;
                }
                if(bb[j].compareTo(bb[j+1]) > 0){
                    String temp = bb[j];
                    bb[j] = bb[j+1];
                    bb[j+1] = temp;
                }
            }
        }
        StringBuffer sa = new StringBuffer();
        StringBuffer sb = new StringBuffer();

        for(int i = 0; i < aa.length; i++){
            sa.append(aa[i]);
            sb.append(bb[i]);
        }

        a = sa.toString();
        b = sb.toString();

        if(a.equals(b))
            return true;
        else
            return false;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
