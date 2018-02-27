#include<iostream>
using namespace std;
int main()
{
int n,r,r1=0;
cout<<"Enter n value:\n";
cin>>n;
while(n!=0)
{
r=n%10;
r1=r1*10+r;
n=n/10;
}
cout<<"Reverse Number="<<r1;
return 0;
}
