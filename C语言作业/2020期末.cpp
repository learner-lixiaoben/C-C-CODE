#include <stdio.h>

int main()
{
	char c;
	int n;
	scanf("%c %d",&c,&n);
	if(c<65||(c>91&&c<97)||c>122)
	{
		printf("Wrong! Please enter an English letter.\n");
	}
	else if((n+1)%2)
	{
		printf("Wrong! Please enter an odd number.\n");
	}
	else
	{
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j==i||j+i==n-1)
				{
					printf(" ");
				}
				else
				{
					printf("%c",c);
				}								
			}
			printf("\n");
		}
	}
	return 0;
 } 
