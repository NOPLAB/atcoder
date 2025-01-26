use core::panic;
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
        q: usize
    }

    let mut snakes = vec![0];
    let mut leave_snake_num = 0;

    for _ in 0..q {
        input! {
            op: usize
        }
        match op {
            1 => {
                input! {
                    l: usize
                }

                snakes.push(snakes[snakes.len() - 1] + l);
            }
            2 => leave_snake_num += 1,
            3 => {
                input! {
                    k: usize
                }

                let l = snakes[k - 1 + leave_snake_num] - snakes[leave_snake_num];

                println!("{}", l);
            }
            _ => panic!(),
        }
    }
}
