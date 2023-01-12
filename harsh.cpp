#include<stdio.h>
int check_prime(int a)
{
	int i,n,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
}
int main(){
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	check_prime(n);
	return 0;
}
