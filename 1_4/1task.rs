fn main() {
    let N: i32 = 4;
    if N > 26 {
        println!("Incorrect data");
    } else {
        for i in (1..=N).rev() {
            for k in (i..=N).rev() {
                let Str = ('A' as u8 + k as u8 - 1) as char;
                print!("{} ", Str);
            }
            println!();
        }
    }
}