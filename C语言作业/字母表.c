#include <stdio.h>
int main()
{char c,d;
if(scanf("%c",&c));
d=c;
if(c>='a'&&c<='z')
{
while(c<='z'){
printf("%c",c);
c++;}
if(c>'z')
{c=c-26;
	while(c<d)
	{
		printf("%c",c);
		c++;
	}
}
}
else
{while(c<='Z'){
printf("%c",c);
c++;}
if(c>'Z')
{c=c-26;
	while(c<d)
	{
		printf("%c",c);
		c++;}
		}
	
}
printf("\n");
}
