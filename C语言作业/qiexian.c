#include <stdio.h>

int main()
{int a,b,x0,y0;
 double c,d;
 if(scanf("%d%d",&a, &b));
 if(scanf("%d%d",&x0, &y0));
 if(a<=0||b<=0||((x0*x0*1.0/a+y0*y0*1.0/b)!=1.0)){printf("Input error!\n");}
 else if(y0==0){c=1.000000*x0;
   printf("x=%.6lf\n",c);}
      else if(x0==0){d=1.000000*y0;
        printf("y=%.6lf\n",d);}
           else if((x0*y0)!=0){c=-(b*1.000000*x0)/(a*y0);d=b*1.000000/y0;
		            if(d>0)printf("y=%.6lfx+%.6lf\n",c,d);
			        else printf("y=%.6lfx%.6lf\n",c,d);}
		        else return 0;
}
