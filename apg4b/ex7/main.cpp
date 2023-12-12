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
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと
  if (a) {
    cout << "At";
  } else {
    cout << "Yo";
  }

  if (!a && b) {
    cout << "Bo";
  } else if (!b || c) {
    cout << "Co";
  }

  if (a && b && c) {
    cout << "foo!";
  } else if (true && false) {
    cout << "yeah!";
  } else if (!a || c) {
    cout << "der";
  }

  cout << endl;
}