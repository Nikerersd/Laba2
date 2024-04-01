import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static boolean isPangram(String sentence) {
        Set<Character> letters = new HashSet<>();
        for (char ch : sentence.toCharArray()) {
            if (Character.isLetter(ch)) {
                letters.add(ch);
            }
        }
        return letters.size() == 26;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string of lowercase Latin letters: ");
        String sentence = scanner.nextLine();
        System.out.println(isPangram(sentence));
    }
}