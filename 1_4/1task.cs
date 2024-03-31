using System;
class Program {
    static void Main(string[] args) {
        Console.WriteLine("Enter the number of characters");
        int N = 26;
        if (N > 26) {
            Console.WriteLine("Incorrect data");
        }
        else {
            for (int i = N; i > 0; i--) {
                for (int k = N; k >= i; k--) {
                    char Str = (char)('A' + k - 1);
                    Console.Write(Str + " ");
                }
                Console.WriteLine();
            }
        }
    }
}