#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>    // bitset
#include <cctype>    // isupper, islower, isdigit, toupper, tolower
#include <cstdint>   // int64_t, int*_t
#include <cstdio>    // printf
#include <deque>     // deque
#include <iostream>  // cout, endl, cin
#include <map>       // map
#include <queue>     // queue, priority_queue
#include <set>       // set
#include <stack>     // stack
#include <string>    // string, to_string, stoi
#include <tuple>     // tuple, make_tuple
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <utility>       // pair, make_pair
#include <vector>        // vector
using namespace std;

int calc_sum_digits(int n) {
  int sum_digit = 0;
  while (n > 0) {
    sum_digit += n % 10;
    n /= 10;
  }
  return sum_digit;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int total_sum = 0;
  for (int i = 1; i <= N; i++) {
    int sum_digit = calc_sum_digits(i);
    if (A <= sum_digit && sum_digit <= B) {
      total_sum += i;
    }
  }
  cout << total_sum << endl;
  return 0;
}