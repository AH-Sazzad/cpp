#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    bool far[26]={false};
    int solve=0;


    for(char c:s){
        if(!far[c-'A']){
            far[c-'A']=true;
            solve++;
        }
    }
    cout<<n+solve<<endl;
   }
    return 0;
}