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
  int K, A, B;
  cin >> K;
  cin >> A >> B;

  for (int n = A; n <= B; n++) {
    int remainder = n % K;
    if (remainder == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  return 0;
}