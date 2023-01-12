#include<stdio.h>
int armstrong(int a)
{
	int n,r,sum=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("The number is not armstrong");
	}
	return 0;
}
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	armstrong(n);
}
