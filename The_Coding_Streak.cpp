#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int current = 0, maxStreak = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] >= 1) {
                current++;
                if (current > maxStreak)
                    maxStreak = current;
            } else {
                current = 0;
            }
        }

        cout << maxStreak << "\n";
    }

    return 0;
}
