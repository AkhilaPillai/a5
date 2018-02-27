#include<iostream>
using namespace std;
int main()
{
int n,i,f=1;
cout<<"Enter the n value:\n";
cin>>n;
for(i=1;i<=n;i++)
{
f=f*i;
}
cout<<"Factorial="<<f;
return 0;
}
