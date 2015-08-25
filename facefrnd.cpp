#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;
set<int>::iterator it;
int t,count=0,x,n,p;
cin>>t;
int l=t;
while(t--){
cin>>x>>n;
s.insert(x);
for(int i=0;i<n;i++){
cin>>p;
s.insert(p);
}
}
for(it=s.begin();it!=s.end();it++)
{count++;}
cout<<count-l;
return 0;
}

