#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100], b[100];
    cin >> a >> b;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }
    }
    int result = strcmp(a, b);
    if (result < 0)
        cout << -1 << endl;
    else if (result > 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}