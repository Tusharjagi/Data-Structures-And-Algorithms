public class exception_handling {
    public static void main (String[] arg) {
//        TRY - CATCH
        int[] marks = {97, 98, 95};
        try {
            System.out.println(marks[5]);
        }
        catch (Exception exception) {
//            do something after catching
            System.out.println(exception.getMessage());
        }

        System.out.println("The name is Tushar");
    }
}
