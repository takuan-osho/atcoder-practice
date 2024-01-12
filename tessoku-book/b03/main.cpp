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
  bool answer = false;

  for (int i = 0; i < N - 2; i++) {
    for (int j = i + 1; j < N - 1; j++) {
      for (int k = j + 1; k < N; k++) {
        if (A[i] + A[j] + A[k] == 1000) {
          answer = true;
          break;
        }
      }
    }
  }

  if (answer) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}