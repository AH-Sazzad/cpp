#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    for (char c : n)
    {
        if (c != '4' && c != '7')
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
