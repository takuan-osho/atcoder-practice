#include <iostream>
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
  string N;
  cin >> N;

  long long result = calc_by_base(N, 2);
  cout << result << endl;
  return 0;
}