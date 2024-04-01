use std::collections::HashSet;
use std::io;

fn pangram(sentence: &str) -> bool {
    let mut letters: HashSet<char> = HashSet::new();
    for ch in sentence.chars() {
        if ch.is_alphabetic() {
            letters.insert(ch);
        }
    }
    letters.len() == 26
}

fn main() {
    let mut sentence = String::new();
    println!("Enter a string of lowercase Latin letters: ");
    io::stdin().read_line(&mut sentence).expect("Failed to read input");
    println!("{}", pangram(&sentence.trim()));
}