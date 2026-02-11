#include <bits/stdc++.h>
using namespace std;
int main(){
   char c[100];
   cin>>c;
   int len=strlen(c);
   for(int i=0;i<len;i+=2){
    for(int j=0;j<len-1;j+=2){
        if(c[j]>c[j+2]){
            swap(c[j],c[j+2]);
        }
    }
   }
   cout<<c<<endl;
   return 0;
}