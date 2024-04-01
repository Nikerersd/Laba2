using System;

public class Program {
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

    public static void Main() {
        int n;
        Console.Write("Enter the number of numbers: ");
        n = int.Parse(Console.ReadLine());
        Console.Write("Enter the numbers separated by a space: ");
        string[] numbers = Console.ReadLine().Split(' ');
        for (int i = 0; i < n; ++i) {
            int number = int.Parse(numbers[i]);
            Console.Write(EvenDigits(number));
            if (i < n - 1) {
                Console.Write(" ");
            }
        }
        Console.WriteLine();
    }
}