import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        int[] array = new int[size];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        // Sort first half in ascending order
        for (int i = 0; i < size / 2; i++) {
            for (int j = i + 1; j < size / 2; j++) {
                if (array[i] > array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        // Sort second half in descending order
        for (int i = size / 2; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] < array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }


        System.out.print("Sorted array: ");
        for (int i : array) {
            System.out.print(i + " ");   
        }
    }
}
