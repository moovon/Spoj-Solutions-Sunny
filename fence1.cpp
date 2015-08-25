#include<iostream>
#include<cstdio>
using namespace std;
int main(){
const double PI = 3.141592653589793;
double l;
cin>>l;
while(l!=0){
double x=(l*l)/(2*PI);
printf("%.2f",x);
cout<<endl;
cin>>l;

}
return 0;
}

