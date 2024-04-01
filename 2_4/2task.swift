import Foundation

func pangram(_ sentence: String) -> Bool {
    var letters = Set<Character>()
    for ch in sentence {
        if ch.isLetter {
            letters.insert(ch)
        }
    }
    return letters.count == 26
}

var sentence = ""
print("Enter a string of lowercase Latin letters: ", terminator: "")
if let input = readLine() {
    sentence = input
}
print(pangram(sentence))