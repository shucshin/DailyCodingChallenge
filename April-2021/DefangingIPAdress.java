public class DefangingIPAdress {
    public static void main(String[] args) {
        String s = "255.100.50.0";
        System.out.println(defangIPaddr(s));
    }

    public static String defangIPaddr(String address) {
        address = address.replaceAll("\\.","[.]");
        return address;
    }
}
