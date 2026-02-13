#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }
        sort(c, c + n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int ans = sum - c[0];
        cout << ans << endl;
    }
    return 0;
}
