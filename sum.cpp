#include<iostream>
using namespace std;
int main() {
	int n,i,d,s=0;
	cout<<"Enter n value\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		d=i*i;
		s+=d;
	}
	cout<<"Sum="<<s;
	return 0;
}
