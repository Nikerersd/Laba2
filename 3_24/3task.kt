import java.util.Scanner

fun evenDigits(number: Int): Int {
    var count = 0
    var num = number
    while (num > 0) {
        val digit = num % 10
        if (digit % 2 == 0) {
            count++
        }
        num /= 10
    }
    return count
}

fun main() {
    val scanner = Scanner(System.`in`)
    print("Enter the number of numbers: ")
    println()
    val n = scanner.nextInt()
    print("Enter the numbers separated by a space: ")
    println()
    for (i in 0 until n) {
        val number = scanner.nextInt()
        print(evenDigits(number))
        if (i < n - 1) {
            print(" ")
        }
    }
    println()
}