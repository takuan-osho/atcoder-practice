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

int factorial(int n) {
  int val = 1;
  for (int i = 1; i <= n; i++) {
    val *= i;
  }
  return val;
}

int main() {
  int P;
  cin >> P;
  int answer = 0;

  for (int i = 10; i >= 1; i--) {
    while (P >= factorial(i)) {
      answer++;
      P -= factorial(i);
    }
  }

  cout << answer << endl;
  return 0;
}