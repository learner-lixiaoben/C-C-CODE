#include <stdio.h>

int main()
{  int a,b,c,d;
   if (scanf("%d",&a));
   d=a%10;
   c=(a-d)/10%10;
   b=(a-d-10*c)/100;
   printf("%d%d%d\n",d,c,b);
   return 0;
}
