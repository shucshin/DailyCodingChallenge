import java.util.*;

public class AntonLetters {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        s = s.replaceAll(",", "");
        s = s.replace("{", "");
        s = s.replace("}", "");
        String[] letters = s.split(" ");
        int count = 0;
        String words = "";
        for(int i = 0; i < letters.length; i++){
            if(!(words.contains(letters[i]))){
                words += letters[i];
                count++;
            }
        }
        System.out.println(count);
    }
}