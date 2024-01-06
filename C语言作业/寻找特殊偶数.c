#include <stdio.h>

int main()
{  int min,max,n,i;
   while(scanf("%d%d",&min,  &max)!=EOF)
   { n=0;
     if(min==0||max==0) break;
     if(min<max&&min>=1000&&max<=9999)
   { for(i=min%2==0?min+2:min+1;i<max;i+=2)
     { if((i/1000)!=(i/100%10)&&(i/1000)!=(i/10%10)&&(i/1000)!=(i%10)&&(i/100%10)!=(i/10%10)&&(i/100%10)!=(i%10)&&(i/10%10)!=(i%10))
         {printf("%d  ",i);
          n++;
		 }
	 }
	 printf("\ncounter=%d\n",n);
	 }  
	 else printf("Error\n");
   }
   return 0; 
}
