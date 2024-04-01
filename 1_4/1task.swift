import Foundation

let N: Int = 4
if N > 26 {
    print("Incorrect data")
} else {
    for i in (1...N).reversed() {
        for k in (i...N).reversed() {
            let Str = Character(UnicodeScalar("A".unicodeScalars.first!.value + UInt32(k - 1))!)
            print(Str, terminator: " ")
        }
        print()
    }
}