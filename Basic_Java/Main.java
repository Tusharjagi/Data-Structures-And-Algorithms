import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

//        Operators +, - , *, /, %
//        Math class
//        Random
//        System.out.println((int)(Math.random()*100));
//        INPUT
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Input Name: ");
//        String name = sc.nextLine();
//        System.out.println(name);


//        Comparison Operators
//        a == b
//        a != b
//        a > b
//        a < b
//        a <= b
//        a => b

//        Logical Operators
//        && AND
//        || OR
//        ! NOT
        Scanner sc = new Scanner(System.in);
        int cash = sc.nextInt();
        if (cash < 10 ) {
            System.out.println("cannot but anything");
            System.out.println("Get more cash");
        }
        else if (cash > 10 && cash < 50) {
            System.out.println("can get 1 thing");
        }
        else {
            System.out.println("can get both");
        }
    }
}