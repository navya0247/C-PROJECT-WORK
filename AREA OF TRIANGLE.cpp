#include <stdio.h>

int main() {
    int b, h, a;
    printf("Enter the base & height of the triangle::\n");
    scanf("%d%d", &b, &h);

    a = ((b * h) / 2);
    
    printf("\nArea of the triangle = %d sq. units", a);

}


