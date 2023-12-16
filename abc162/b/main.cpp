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

int main() {
  int N;
  cin >> N;
  int divider1 = 3;
  int divider2 = 5;
  long long sum = 0;

  for (int i = 1; i <= N; i++) {
    if (i % (divider1 * divider2) == 0) {
      continue;
    } else if (i % divider1 == 0) {
      continue;
    } else if (i % divider2 == 0) {
      continue;
    }
    sum += i;
  }
  cout << sum << endl;
  return 0;
}