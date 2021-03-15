import java.util.*;
import java.text.*;

public class CurrencyFormatter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        // Write your code here.
        Locale INDIA = new Locale("en", "IN");

        NumberFormat US = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat IN = NumberFormat.getCurrencyInstance(INDIA);
        NumberFormat CN = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat FR = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        
        System.out.println("US: " + US.format(payment));
        System.out.println("India: " + IN.format(payment));
        System.out.println("China: " + CN.format(payment));
        System.out.println("France: " + FR.format(payment));
    }
}
