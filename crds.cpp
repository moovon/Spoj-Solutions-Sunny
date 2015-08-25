#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n,sum1,sum2,sum,i;
cin>>t;
while(t--){
sum1=0; sum2=0;
cin>>n;
sum1=(n*(n+1));
sum2=(((n-1)*n)/2);
sum=(sum1+sum2)%1000007;
cout<<sum<<endl;
}
return 0;
}
