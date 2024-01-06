#include <math.h>
#include <stdio.h>

int main()
{int a,b,c;double x,d,e;
 //ax^2+bx+c=0
 if(scanf("%d%d%d",&a, &b, &c));
 if(a==0&&b==0)
   {printf("Input error!\n");}
   else if(a==0&&b!=0) 
    {x=-c/(b*1.000000);
    printf("x=%.6lf\n",x);}
        else if(a!=0&&b*b-4*a*c<0&&b==0)
             {d=-b*1/(2*a);e=sqrt(4*a*c-b*b)/(2.000000*a);
              printf("x1=%.6lfi\nx2=-%.6lfi\n",e,e);} 
               else if(b*b-4*a*c<0&&a*b!=0){d=-b/(2.000000*a);e=sqrt(4*a*c-b*b)/(2.000000*a);
			     printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",d,e,d,e);}
                    else if((a!=0&&b*b-4*a*c==0)||(b==0&&c==0))
	                  {d=-b/(2.000000*a);
	                   printf("x1=x2=%.6lf\n",d);}
	                     else if(b*b-4*a*c>0) {
						 d=-b/(2.000000*a);e=sqrt(b*b-4*a*c)/(2.000000*a);
	                       printf("x1=%.6lf\nx2=%.6lf\n",d+e,d-e);}
	                          else return 0;
}
