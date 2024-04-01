import java.util.*

fun Pangram(sentence: String): Boolean {
    val letters = TreeSet<Char>()
    for (ch in sentence) {
        if (ch.isLetter()) {
            letters.add(ch)
        }
    }
    return letters.size == 26
}

fun main() {
    val scanner = Scanner(System.`in`)
    print("Enter a string of lowercase Latin letters: ")
    val sentence = scanner.nextLine()
    println(Pangram(sentence))
}