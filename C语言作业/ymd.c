#include <stdio.h>

int main()
{int y,m,d,w;
 while(~scanf("%d%d%d",&y, &m, &d)){
 	if(m==1||m==2){
 		m+=12;y--;}
	 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
	 printf("%d\n",w);
 }
}
