use core::panic;
#[allow(unused_imports)]
use itertools::{iproduct, Itertools};
#[allow(unused_imports)]
use num_traits::pow;
use proconio::input_interactive;
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
    input_interactive! {
        q: usize
    }

    let mut snake: VecDeque<usize> = VecDeque::new();

    for _ in 0..q {
        input_interactive! {
            op: usize
        }
        match op {
            1 => {
                input_interactive! {
                    l: usize
                }

                snake.push_back(l);
            }
            2 => {
                snake.pop_front();
            }
            3 => {
                input_interactive! {
                    k: usize
                }

                let l: usize = snake.iter().take(k - 1).sum();

                println!("{}", l);
            }
            _ => panic!(),
        }
    }
}
