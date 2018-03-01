#include <stdio.h>
using namespace std;
int main(void) {
	char a[100];
	int u,v,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='x' && a[i]=='y' && a[i]=='z')
		{
			u=a[i];
			v=u-23;
			a[i]=v;
		}
		else
		{
		u=a[i];
		v=u+3;
		a[i]=v;
		}
	}
printf("%s",a);
	return 0;
}
