fn even_digits(number: i32) -> i32 {
    let mut count = 0;
    let mut num = number;
    while num > 0 {
        let digit = num % 10;
        if digit % 2 == 0 {
            count += 1;
        }
        num /= 10;
    }
    count
}

fn main() {
    let mut n = String::new();
    println!("Enter the number of numbers: ");
    std::io::stdin().read_line(&mut n).unwrap();
    let n: usize = n.trim().parse().unwrap();

    let mut numbers = String::new();
    println!("Enter the numbers separated by a space: ");
    std::io::stdin().read_line(&mut numbers).unwrap();
    let numbers: Vec<i32> = numbers
        .split_whitespace()
        .map(|num| num.parse().unwrap())
        .collect();

    for (i, number) in numbers.iter().enumerate() {
        print!("{}", even_digits(*number));
        if i < n - 1 {
            print!(" ");
        }
    }
    println!();
}