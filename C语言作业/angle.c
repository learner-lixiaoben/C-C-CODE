#include <stdio.h>

int main()
{int a,b;
float c;
if(scanf("%d%d",&a, &b));
c=a*30-b*5.5;
if(c<0)c=-c;
if(c>=0&&c<=180) c=c+0;
else if(c>180&&c<=360) c=360-c;
	 else c=c+360;  
if (b<10) printf("At %d:0%d the angle is %.1f degrees.\n",a,b,c);
else printf("At %d:%d the angle is %.1f degrees.\n",a,b,c);	      
 } 
