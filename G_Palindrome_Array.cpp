#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int new_ar[n];
    int i=0,j=n-1;
    while(i<n){
        new_ar[i]=ar[j];
        i++;
        j--;
    }
    int flag=1;
    for(int k=0;k<n;k++){
        if(new_ar[k]!=ar[k]){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
    
}