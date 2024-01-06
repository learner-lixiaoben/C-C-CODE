#include <stdio.h>

int main()
{int y,m,d,w,a,t;
 while(~scanf("%d%d%d",&y, &m, &d))
 {  a=m;t=y;
     if(m==1||m==2){
 		m+=12;y--;}
	 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
	 if((a<=0||a>12)&&d<=31&&d>0){printf("month is wrong.\n");}
	      else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		  {if(d>31||d<=0){printf("day is wrong.\n");}
		  else printf("%d\n",w);}
		       else if(a==2){if(((t%4==0&&t%100!=0)||t%400==0&&d<=29&&d>0)||((t%4!=0||t%100==0&&t%400!=0)&&d<=28&&d>0)){printf("%d\n",w);}
		                    else printf("day is wrong.\n");}
		            else if(a==4||a==6||a==9||a==11){if(d<=30&&d>0){printf("%d\n",w);}
		                                             else printf("day is wrong.\n");}
		                 else if((a<=0||a>12)&&(d>31||d<=0)){printf("month and day are wrong.\n");} 
						      else return 0;                           
 }
}
