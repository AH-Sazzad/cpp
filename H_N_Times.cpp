#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    char x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<x<<endl;
        }else{
            cout <<x<<" ";
        }
    }
   }
    return 0;
}