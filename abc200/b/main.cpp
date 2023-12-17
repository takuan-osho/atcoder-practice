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

long long manipulate_input(long long input) {
  if (input % 200 == 0) {
    return input / 200;
  }
  return input * 1000 + 200;
}

int main() {
  int N, K;
  cin >> N >> K;
  long long ret = N;
  for (int i = 0; i < K; i++) {
    ret = manipulate_input(ret);
  }
  cout << ret << endl;
  return 0;
}