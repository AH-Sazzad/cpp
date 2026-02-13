#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string section; // Section as string to handle cases like "A1", "B2"
    int totalMark;
};

int main()
{
    int t;
    cin >> t;


    while (t--)
    {
        Student info[3];

        
        
        for (int i = 0; i < 3; i++)
        {
            cin >> info[i].id >> info[i].name >> info[i].section >> info[i].totalMark;
        }

        
        int maxMark = max({info[0].totalMark, info[1].totalMark, info[2].totalMark});

        
        for (int i = 0; i < 3; i++)
        {

            if (info[i].totalMark == maxMark)
            {
                cout << info[i].id << " " << info[i].name << " " << info[i].section << " " << info[i].totalMark << endl;
                break;
            }
        }
    }

    return 0;
}
