//nCr With a fact( ) Function

#include<stdio.h>
int fact(int num)
{
	int fac=1;
	for(int i=1;i<=num;i++)
	{
		fac=fac*i;
	}
    return fac;
}
int main(void)
{
    int n,r;
    printf("enter the values of n and r:");
    scanf("%d%d",&n,&r);
    int comb;
    comb=fact(n)/(fact(n-r)*fact(r));
    printf("nCr:%d",comb);
    return 0;
}