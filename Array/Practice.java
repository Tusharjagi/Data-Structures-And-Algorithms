public class Practice {
    public static void printArray(int array []) {
        for (int i = 0; i < array.length; i++) {
            System.out.println(i);
        }
    }


    public static void main (String[] args) {
        System.out.println("You should practise here !!!");
        int [] arr = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j ++) {
                if (arr[j] > arr[i + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j+1] = temp;
                }
            }
        }
        printArray(arr);
    }
}
