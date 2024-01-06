#include <stdio.h>
#include <string.h>

int namel(char a[])
{
	int i=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<65||(a[i]>91&&a[i]<97)||a[i]>122)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char name[10]="\0",day[10]="/0",pw[10]="\0";
	scanf("%s",day);
	scanf("%s",name);
	if(strlen(day)!=8)
	{
		printf("Error: wrong format of date.\n");
	}
	else if(namel(name))
	{
		printf("Error: wrong format of name.\n");
	} 
	else
	{
		int i,len=strlen(name);
		if(len<8)
		{
			for(i=len;i<8;i++)
			{
				name[i]='@';
			}
			name[8]='\0';
		}
		for(i=0;i<8;i++)
		{
			if(i==6)
			{
				i=6;
			}
			if(name[i]>=97&&name[i]<=122)
			{
				name[i]-=26;
			}
			pw[i]=name[i]+day[7-i]-'0';
			if(pw[i]>=91&&pw[i]<=96)
			{
				pw[i]=pw[i]-90+'0';
			}
		}
		puts(pw);
	}
	return 0;
}
