#[allow(unused_imports)]
use itertools::{iproduct, Itertools};
#[allow(unused_imports)]
use num_traits::pow;
#[allow(unused_imports)]
use proconio::{
    fastout, input,
    marker::{Chars, Usize1},
};
#[allow(unused_imports)]
use std::cmp::{max, min};
#[allow(unused_imports)]
use std::collections::{HashMap, HashSet, VecDeque};
#[allow(unused_imports)]
use std::iter::FromIterator;

#[fastout]
fn main() {
    input! {
        n: usize,
        d: usize
    }

    let mut snake = vec![];

    for _ in 0..n {
        input! {
            t: usize,
            l: usize
        }

        snake.push((t, l));
    }

    for i in 1..=d {
        let ans = snake.iter().map(|s| s.0 * (s.1 + i)).max().unwrap();

        println!("{}", ans);
    }
}
