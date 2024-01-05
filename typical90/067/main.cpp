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

string convert_by_nine(const string &input) {
  if (input == "0") {
    return "0";
  }

  long long base10 = 0;
  for (auto c : input) {
    base10 *= 8;
    base10 += c - '0';
  }

  string result;
  while (base10 > 0) {
    result = char(base10 % 9 + '0') + result;
    base10 /= 9;
  }
  return result;
}

string replace_with_five(const string &input) { return "bbb"; }

int main() {
  string N;
  int K;

  cin >> N >> K;
  for (int i = 0; i < K; i++) {
    N = convert_by_nine(N);
    for (int j = 0; j < N.size(); j++) {
      if (N[j] == '8') {
        N[j] = '5';
      }
    }
  }
  cout << N << endl;
  return 0;
}