#include<iostream>
using namespace std;
int main(){
float x;
cin>>x;
while(x!=0.00){
float sum=0,i,count=0;
for(i=1;i<400;i++){
sum=sum+(1/(i+1));
if(sum>x) break;
count++;
}
cout<<count+1<<" card(s)"<<endl;
cin>>x;
}
return 0;
}

