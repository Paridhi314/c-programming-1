#include<stdio.h>
int main()
{
    int n,i,product;
    i=1;
    printf("Enter the number whose table should be printed : ");
    scanf("%d" ,&n);
    do {
        product=n*i;
        printf("%d x %d = %d \n" ,n,i,product);
        i++;
    }
    while(i<=12);
    return 0;
}
