public class conditional {
    public static void main (String [] arg) {
//        Conditional / SWITCH
//        boolean isSunUp = false;
//        if (isSunUp) {
//            System.out.println("Day");
//        }
//        else  {
//            System.out.println("Night");
//        }

//        Age
//        int age = 30;
//        if (age > 30) {
//            System.out.println("can vote");
//        }
//        else {
//            System.out.println("can't vote");
//        }

        int day = 2;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            default:
                System.out.println("wed - sun");
        }

    }
}
