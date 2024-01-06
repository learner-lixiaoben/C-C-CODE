#include <stdio.h>
#include <math.h>
int main()
{int a,b,c,d,e,f,k;
if(scanf("%d%d%d%d",&a, &b, &c, &d));
e=a*d+b*c;
f=b*d;
if(e>0&&f>0){
int m=e;
int n=f;
while(k=m%n)
{
	m=n;
	n=k;
}
if(k==1)
{
    printf("%d/%d\n",e,f);
}
else
{
	printf("%d/%d\n",e/n,f/n);
}}
else{int m=abs(e);
int n=abs(f);
while(k=m%n)
{
	m=n;
	n=k;
}
if(k==1)
{
    printf("%d/%d\n",e,f);
}
else
{
	printf("%d/%d\n",e/n,f/n);
}
}
}
