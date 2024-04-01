using System;
using System.Collections.Generic;

class Program {
    static bool Pangram(string sentence) {
        HashSet<char> letters = new HashSet<char>();
        foreach (char ch in sentence) {
            if (char.IsLetter(ch)) {
                letters.Add(ch);
            }
        }
        return letters.Count == 26;
    }

    static void Main() {
        string sentence;
        Console.Write("Enter a string of lowercase Latin letters: ");
        sentence = Console.ReadLine();
        Console.WriteLine(Pangram(sentence));
    }
}