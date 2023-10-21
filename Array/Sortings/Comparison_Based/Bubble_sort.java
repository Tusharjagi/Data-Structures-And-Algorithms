package Sortings.Comparison_Based;

public class Bubble_sort {
    public static void printArray(int arr []) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void main (String[] args) {
//      TC = 0(n^2)
        System.out.println("Bubble Sort");
        int [] arr = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j+1]) {
//                    swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printArray(arr);
    }
}
