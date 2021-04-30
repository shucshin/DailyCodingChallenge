import java.util.*;

public class AntonPolyhedrons {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        int sum = 0;
        for(int i = 0; i < n; i++){
            String s = scan.nextLine();
            switch(s){
                case "Tetrahedron":
                    sum += 4;
                    break;
                case "Cube":
                    sum += 6;
                    break;
                case "Octahedron":
                    sum += 8;
                    break;
                case "Dodecahedron":
                    sum += 12;
                    break;
                case "Icosahedron":
                    sum += 20;
                    break;
            }
        }
        System.out.println(sum);
    }
}
