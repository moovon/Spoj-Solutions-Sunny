#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<list>
#include<bitset>
using namespace std;

int main(){
long long n,k,i,sum,a,b;
cin>>n;
while(n--){
cin>>k;
sum=0;
for(i=1;;i++){
sum=sum+i;
if(sum>=k) break;
}
long long m;
m=sum-k;
if(i%2!=0){
a=1;b=i;
while(m--){
a++;b--;
}
}
else{
a=i;b=1;
while(m--){
a--;
b++;
}
}
cout<<"TERM "<<k<<" IS "<<a<<"/"<<b<<endl;
}
return 0;
}
