#include<iostream>
using namespace std;
int main(){
long long i, t ,n;
cin>>t;
while(t--){
long long sum=0;
cin>>n;
long long a[n];
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++){
sum=sum+a[i];
sum=sum%n;
}
if(sum==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}
