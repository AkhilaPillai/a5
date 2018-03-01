#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,i,d,s=0;
	cout<<"Enter n value\n";
	cin>>n;
	i=n;
	do
	{
		d=i%10;
		s=s+pow(d,2);
		i=i/10;
	}while(i!=0);
	cout<<"Sum="<<s;

}
