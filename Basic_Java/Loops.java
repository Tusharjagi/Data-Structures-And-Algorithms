import java.util.Scanner;

public class Loops {
    public static void main (String[] arg) {
//        for
//        while
//        do while

        for (int i = 1; i <= 100; i++) {
//            System.out.println(i);
        }

        int j = 100;
        while (j >= 1) {
//            System.out.println(j);
            j--;
        }

//        do while
        int k = 1;
        do {
//            System.out.println(k);
            k++;
        } while (k <= 100);

        int number;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Input a number");
            number = sc.nextInt();
            System.out.println(number);
        } while (number >= 0);
        System.out.println("The End");
    }
}
