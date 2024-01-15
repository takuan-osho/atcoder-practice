#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  vector<int> L(Q), R(Q);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < Q; i++) {
    cin >> L[i] >> R[i];
  }

  vector<int> S(N + 1);
  S[0] = 0;
  for (int i = 1; i <= N; i++) {
    S[i] = S[i - 1] + A[i - 1];
  }

  for (int j = 0; j < Q; j++) {
    cout << S[R[j]] - S[L[j] - 1] << endl;
  }
  return 0;
}
