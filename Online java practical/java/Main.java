import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int n1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int n2 = scanner.nextInt();

        int sum = 0;
        for (int i = n1; i <= n2; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }

        System.out.println("The sum of prime numbers between " + n1 + " and " + n2 + " is " + sum);
    }

    private static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}