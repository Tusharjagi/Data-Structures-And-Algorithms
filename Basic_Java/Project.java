import java.util.Scanner;

public class Project {
    public static void main (String[] arg) {
        final int randomNumber = (int)(Math.random()*100);
        Scanner sc = new Scanner(System.in);
        int userNumber;
        do {
            System.out.print("Please Enter Any Number between 1 to 100 : ");
            userNumber = sc.nextInt();

            if (userNumber == randomNumber) {
                System.out.println("WOOOHHOOO.... Correct number");
                break;
            }
            else if (userNumber > randomNumber) {
                System.out.println("Your number is too large");
            }
            else {
                System.out.println("Your number is small");
            }
        } while (userNumber >= 0);

        System.out.print("My Number is: " + randomNumber);


        System.out.println(sc);
    }
}
