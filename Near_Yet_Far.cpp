#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        // min of first K elements
        int min_firstK = *min_element(A.begin(), A.begin() + K);
        // max of last K elements
        int max_lastK = *max_element(A.end() - K, A.end());

        int score = max_lastK - min_firstK;
        cout << score << "\n";
    }

    return 0;
}
