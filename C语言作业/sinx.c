#include <stdio.h>

double x_n(double x,int n)
{
	int i=0;
	double ret=1;
	for(i=0;i<n;i++)
	{
		ret*=x;
	}
	return ret;
}

double nn(int n)
{
	int i=1;
	double ret=1;
	for(i=1;i<=n;i++)
	{
		ret*=i*1.0;
	}
	return ret;
}

int main()
{
	int degree;
	scanf("%d",&degree);
	
	//角度转化为弧度 
	double rad=degree*3.1415926/180.0;
	
	//计算sin值
	int i=0;
	double k=1.0;
	double sinx=0;
	for(i=0;x_n(rad,2*i+1)/nn(2*i+1)>0.000001;i++)
	{
		double p=x_n(rad,2*i+1),t=nn(2*i+1);
		sinx+=(p/t)*k;
		k=-k;
	}
	printf("i=%d,sin(%d)=sin(%.6lf)=%.6lf\n",i,degree,rad,sinx);
	return 0;
}
