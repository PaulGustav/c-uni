use std::io;

fn main() {
    let os: f32;
    let us: f32;
    let h: f32;

    stdin().read_line(&mut os).unwrap();
    stdin().read_line(&mut us).unwrap();
    stdin().read_line(&mut h).unwrap();

    println!(
        "Der Flächeninhalt des Trapez beträgt: {}",
        (os + us) / 2 as f32 * h
    );
}
