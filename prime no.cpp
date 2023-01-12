#include<stdio.h>
int prime(int a,int b);
{
	int i,j;
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		{
			printf("The numbers are:%d\n",j);
		}
	}
	return 0;
}
int main()
{
	int x,y;
	printf("enter the range");
	scanf("%d %d",&x,&y);
	prime(x,y);
}
