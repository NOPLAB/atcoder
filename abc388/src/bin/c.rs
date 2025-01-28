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
        n: usize
    }

    let mut m = vec![];

    for _ in 0..n {
        input! {
            t: usize
        }

        m.push(t);
    }

    let mut ans = 0;
    for i in 1..n {
        let smalls = &m[0..i];
        let big = &m[i];

        ans += smalls.iter().filter(|size| **size <= big / 2).count();
    }

    println!("{}", ans);
}
