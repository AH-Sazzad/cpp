#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int low = 0, high = 0;

    for (char c : s)
    {
        if (isupper(c))
            high++;
        else
            low++;
    }

    if (high > low)
    {
        for (char c : s)
            cout << (char)toupper(c);
    }
    else
    {
        for (char c : s)
            cout << (char)tolower(c);
    }

    return 0;
}
