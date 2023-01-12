#include <stdio.h>
int arm(int a)
{
    int r,sum=0,temp;
    temp=a;
    while(a>0)
    {
        r=a%10;
        sum=sum+(r*r*r);
        a=a/10;
    }
    if(temp==sum)
    {
        printf("The number is armstrong ");
    }
    else
   {
       printf("The number is not armstrong ");
   }
   
}
int main() {
     int n;
     printf("Enter the number to be checked ");
     scanf("%d",&n);
     arm(n);
    return (0);
}
