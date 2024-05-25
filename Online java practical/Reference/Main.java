import java.util.Scanner;

class Number {
    int value;
}

public class Main {
    // Call by value
    static void updateValue(int value) {
        value = 50;
    }

    // Call by reference
    static void updateObject(Number number) {
        number.value = 80;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int value = scanner.nextInt();

        Number number = new Number();
        number.value = value;

        updateValue(value);
        System.out.println("After call by value: " + value);  
        
        updateObject(number);
        System.out.println("After call by reference: " + number.value);  
    }
}