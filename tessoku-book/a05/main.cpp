#include <iostream>
using namespace std;

int main() {
  int N, K;
  int answer = 0;
  cin >> N >> K;

  for (int s = 1; s <= N; s++) {
    for (int t = 1; t <= N; t++) {
      int u = K - (s + t);
      if (u >= 1 && u <= N) {
        answer++;
      }
    }
  }
  cout << answer << endl;
  return 0;
}