#include <stdio.h>
int main()
{int m,n,k;
if(scanf("%d%d",&m, &n));
int a=m;
int b=n; 
while(k=m%n)
{
	m=n;
	n=k;
}
printf("GCD(%d,%d)=%d\n",a,b,n);
 } 
