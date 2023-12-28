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

long long calc_by_base(const string &input, int base) {
  long long result = 0;
  for (auto c : input) {
    result *= base;
    result += c - '0';
  }
  return result;
}

int main() {
  int K;
  string A, B;
  cin >> K >> A >> B;

  long long a = calc_by_base(A, K);
  long long b = calc_by_base(B, K);
  cout << a * b << endl;

  return 0;
}