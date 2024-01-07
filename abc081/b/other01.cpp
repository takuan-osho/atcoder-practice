#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) {
    cin >> a;
  }

  int counter = 0;

  while (true) {
    bool can_do = true;
    for (auto a : A) {
      if (a % 2 == 1) {
        can_do = false;
      }
    }
    if (!can_do) {
      break;
    }
    for (auto &a : A) {
      a /= 2;
    }
    counter++;
  }
  cout << counter << endl;
}