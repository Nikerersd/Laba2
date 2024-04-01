function EvenDigits(number) {
    let count = 0;
    while (number > 0) {
        let digit = number % 10;
        if (digit % 2 === 0) {
            count++;
        }
        number = Math.floor(number / 10);
    }
    return count;
}

let n;
console.log("Enter the number of numbers: ");
n = parseInt(prompt());
console.log("Enter the numbers separated by a space: ");
let numbers = prompt().split(" ");
for (let i = 0; i < n; ++i) {
    let number = parseInt(numbers[i]);
    console.log(EvenDigits(number));
}
console.log();