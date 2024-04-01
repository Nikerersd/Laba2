import Foundation

func evenDigits(_ number: Int) -> Int {
    var count = 0
    var num = number
    while num > 0 {
        let digit = num % 10
        if digit % 2 == 0 {
            count += 1
        }
        num /= 10
    }
    return count
}

print("Enter the number of numbers: ", terminator: "")
if let n = Int(readLine() ?? "") {
    print("Enter the numbers separated by a space: ", terminator: "")
    if let input = readLine() {
        let numbers = input.split(separator: " ").compactMap { Int($0) }
        let result = numbers.map { evenDigits($0) }
        print(result.map { String($0) }.joined(separator: " "))
    }
}

