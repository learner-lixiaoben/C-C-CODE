#include <stdio.h>
int main()
{int a,b,n;
n=1;
if(scanf("%d",&a));
while (a!=1&&n<=20)
{
	if(a%2!=0)
	{   b=a;
		a=a*3+1;
		n++;
		printf("%d*3+1=%d\n",b,a);
	}
	else
	{
		b=a;
		a=a/2;
		n++;
		printf("%d/2=%d\n",b,a);
	}
}
 } 
