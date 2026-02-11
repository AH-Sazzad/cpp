#include <bits/stdc++.h>
using namespace std;    
int* p(int n){
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int *a =p(n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    delete[] a;
    return 0;

}
