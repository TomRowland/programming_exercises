fn main() {
    let name = "Thomas";
    for char in name.chars().rev() {
        print!("{}", char);
    }
    print!("\n");
}
