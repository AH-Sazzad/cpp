#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int s = 0;
        if (x > y)
        {
        
            cout << s+1<< endl;
        }
        else
        {
            while (x < y)
            {
                x = x + 2;
                y = y + 1;
                s++;
            }
        }

        if (x == y)
        {
            cout << s << endl;
        }
    }
}