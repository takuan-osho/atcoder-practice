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

bool containsNumber(int input_number, int target_number = 7) {
  int remainder;
  bool contains_flag = false;
  while (input_number > 0) {
    remainder = input_number % 10;
    if (remainder == target_number) {
      contains_flag = true;
      break;
    }
    input_number /= 10;
  }
  return contains_flag;
}

int main() {
  int N;
  cin >> N;
  bool contains_flag = containsNumber(N);
  if (contains_flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}