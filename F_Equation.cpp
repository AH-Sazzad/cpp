#include <bits/stdc++.h>
using namespace std;
double myPow(int base , int exp){
    double result=1;
    if(exp<0){
        base=1/base;
        exp= -exp;
    }
      for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}
int main()
{
   int x,n;
   cin>>x>>n;
//    cout<<x<<n;
   int sum=0;
   for(int i=2;i<=n;i+=2){
        sum+=myPow(x,i);
   }
   cout<<sum<<endl;
    return 0;
}