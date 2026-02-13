#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
        int n,s;
        cin>>n>>s;
        int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0;
    for(int x=0;x<n-2;x++){
        for(int y=x+1;y<n-1;y++){
            for(int z=y+1;z<n;z++){
                if(a[x]+a[y]+a[z]==s){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) break;
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
   }
   
    return 0;
}