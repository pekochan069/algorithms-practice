fn main() {
    let s = "hello";

    let answer: i32 = 
        s
        .as_bytes()
        .array_windows::<2>()
        .map(|[a, b]| ((*a as i32) - (*b as i32)).abs())
        .sum();

    println!("{}", answer);
}
