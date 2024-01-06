#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{int x,y,n;
if(scanf("%d%d%d",&x, &y, &n));
int a=1;
int b=1;
int t[1000][1000];
t[a][b]=abs(y*1.0/x*1.0-b*1.0/a*1.0);
for(;a<n;a++)
{
	if(t[a][b]>=t[a-1][b])
	{
		break;
	}
	else for(;abs(b*1.0/a*1.0)>abs(y*1.0/x*1.0);b++)
	{
		if(t[a][b]>=t[a][b-1])
		{
			break;
		}
	}
	
}
printf("%d/%d",b,a);
return 0;

 } 
