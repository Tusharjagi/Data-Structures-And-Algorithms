public class Strings {
    public static void main (String [] arg) {
//  Strings
//     concatenate
        String name1 = "Tushar";
        String name2 = "Jagi";
        String result = name1 + " " + name2;
        System.out.println(result);
//     charAt
        String name = "Tushar";
        System.out.println(name.charAt(1));
//     length
        System.out.println(name.length());
//     replace (immutable)
        String Replace = name.replace("a", "j");
        System.out.println(Replace);
//     subString
        String subString = name.substring(3, 5);
        System.out.println(subString);
    }
}
