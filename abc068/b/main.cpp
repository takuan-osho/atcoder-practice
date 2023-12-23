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

int divide_count(int divisor, int divider = 2) {
  int count = 0;
  while (divisor % divider == 0 && divisor > 0) {
    divisor /= divider;
    count++;
  }
  return count;
}

int main() {
  int N;
  cin >> N;

  int result = 0;
  int max_divide_count =
      -1; // 初期値がポイント。inputが1の時に処理できるように設定。
  for (int i = 1; i <= N; i++) {
    int count = divide_count(i);
    if (max_divide_count < count) {
      max_divide_count = count;
      result = i;
    }
  }

  cout << result << endl;
  return 0;
}