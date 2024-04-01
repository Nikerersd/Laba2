fun main() {
    val N = 4
    if (N > 26) {
        println("Incorrect data")
    } 
    else {
        for (i in N downTo 1) {
            for (k in N downTo i) {
                val Str = 'A' + k - 1
                print("$Str ")
            }
            println()
        }
    }
}