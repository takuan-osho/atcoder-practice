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
  int A, B, K;
  cin >> A >> B >> K;

  if ((B - A + 1) >= 2 * K) {
    for (int i = 0; i < K; i++) {
      cout << A + i << endl;
    }
    for (int i = K - 1; i >= 0; i--) {
      cout << B - i << endl;
    }
    return 0;
  } else {
    for (int i = A; i <= B; i++) {
      cout << i << endl;
    }
    return 0;
  }
}