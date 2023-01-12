#include<stdio.h>
int main(){
    int i,l=0;
 char a[25],b[25];
 scanf("%s",&a);
 scanf("%s",&b);
    
    for(i=0;a[i]!='\0';i++)
    l++;
    
    for(i=0;b[i]='\0';i++)
    a[l+i]=b[i];
    
    a[i+i]='\0';
    
    printf("%s",a);
    return 0;
}
