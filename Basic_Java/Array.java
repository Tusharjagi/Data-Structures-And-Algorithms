import java.util.Arrays;

public class Array {
    public static void main (String[] arg) {
        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 83;
        marks[2] = 88;
//        System.out.println(marks[0]);
//        sort
        Arrays.sort(marks);
//        System.out.println(marks[0]);

        int[] number = {23, 43, 45};

        int[][] finalMark = {{32, 44, 43}, {75, 47, 73}};
        System.out.println(finalMark[1][2]);
    }
}
