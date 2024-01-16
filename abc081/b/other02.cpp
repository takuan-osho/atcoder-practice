#include <iostream>
#include <vector>
using namespace std;

constexpr int INF = 1 << 30;

int how_many_times(int num) {
  int counter = 0;
  while (num % 2 == 0) {
    num /= 2;
    counter++;
  }
  return counter;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) {
    cin >> a;
  }

  int result = INF;

  for (auto a : A) {
    int counter = how_many_times(a);
    result = min(result, counter);
  }
  cout << result << endl;
  return 0;
}