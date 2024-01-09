#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);

  for (auto &a : A) {
    cin >> a;
  }
  bool answer = false;

  for (auto a : A) {
    if (a == X) {
      answer = true;
    }
  }

  if (answer == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
