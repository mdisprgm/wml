fn world_most_logical(x: f64) -> f64 {
    (18111.0 / 2.0) * x.powi(4) - 90555.0 * x.powi(3) + (633885.0 / 2.0) * x.powi(2) - 452773.0 * x
        + 217331.0
}

fn main() {
    println!("{}", world_most_logical(1.0)); // 1
    println!("{}", world_most_logical(2.0)); // 3
    println!("{}", world_most_logical(3.0)); // 5
    println!("{}", world_most_logical(4.0)); // 7
    println!("{}", world_most_logical(5.0)); // 217341
}
