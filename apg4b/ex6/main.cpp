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
  int A, B;
  string op;
  cin >> A >> op >> B;

  char c = op[0]; // Convert string to character

  switch (c) {
  case '+':
    cout << A + B << endl;
    break;
  case '-':
    cout << A - B << endl;
    break;
  case '*':
    cout << A * B << endl;
    break;
  case '/':
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
    break;
  case '?':
    cout << "error" << endl;
    break;
  case '=':
    cout << "error" << endl;
    break;
  case '!':
    cout << "error" << endl;
    break;
  default:
    cout << "This error came from an unexpected path. Please check your code."
         << endl;
  }
}