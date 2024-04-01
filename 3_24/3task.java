import java.util.Scanner;

public class Main {
    public static int EvenDigits(int number) {
        int count = 0;
        while (number > 0) {
            int digit = number % 10;
            if (digit % 2 == 0) {
                count++;
            }
            number /= 10;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of numbers: ");
        int n = scanner.nextInt();
        System.out.print("Enter the numbers separated by a space: ");
        for (int i = 0; i < n; ++i) {
            int number = scanner.nextInt();
            System.out.print(EvenDigits(number));
            if (i < n - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
    }
}