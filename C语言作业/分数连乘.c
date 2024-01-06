#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
#include <stdlib.h>
int main()
{int n,i,a,b,k;
if(scanf("%d",&n));
int arr1[100],arr2[100];
a=1;b=1;i=0;
while(i<n)
{
	scanf("%d%d",&arr1[i], &arr2[i]);
	a*=arr1[i];
	b*=arr2[i];
	i++;
}
int p=a;
int q=b;
while(p%q!=0)
{
	k=p%q;
	p=q;
	q=k;
}
if(a%b==0)
{
	printf("%d\n",a/b);
}
else if(a/b<0&&q==1) 
{
	a=abs(a);
	b=abs(b);
	printf("-%d/%d\n",a,b);
}
     else if(a/b<0&&q!=1) 
     {
     	a=abs(a);
     	b=abs(b);
     	printf("-%d/%d\n",a/q,b/q);
	 }
	      else if(a/b>0&&q==1)
	      {
	      	a=abs(a);
     	    b=abs(b);
	      	printf("%d/%d\n",a,b);
		  }
		       else
		       {
		       	a=abs(a);
     	        b=abs(b);
		       	printf("%d/%d\n",a/q,b/q);
			   }
return 0;
 } */

#include <stdio.h>

 // 用于计算两个整数的最大公约数的函数
int gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    long long product_numerator=1;
    long long product_denominator=1;

    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        // 计算当前分式的乘积分子和分母
        long long current_gcd = gcd(a, b);
        product_numerator = product_numerator * (a / current_gcd);
        product_denominator = product_denominator * (b / current_gcd);
    }
    // 计算结果的最大公约数，以便化简分数
    long long common_gcd = gcd(product_numerator, product_denominator);

    product_numerator /= common_gcd;
    product_denominator /= common_gcd;

    // 如果分母为1，输出整数；否则输出分数形式
    if (product_denominator == 1) {
        printf("%lld\n", product_numerator);
    }
    else {
        if (product_numerator > 0 && product_denominator > 0) {
            printf("%lld/%lld\n", product_numerator, product_denominator);
        }
        else if (product_numerator < 0 && product_denominator > 0) {
            printf("-%lld/%lld\n", -product_numerator, product_denominator);
        }
        else if (product_numerator > 0 && product_denominator < 0) {
            printf("-%lld/%lld\n", product_numerator, -product_denominator);
        }
        else {
            printf("%lld/%lld\n", -product_numerator, -product_denominator);
        }
    }
    return 0;
}

 
