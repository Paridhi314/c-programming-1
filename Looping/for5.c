#include<stdio.h>
int main()
{
    int n,i;
    float a,avg, sum;
    printf("How many numbers :");
    scanf("%d" ,&n);
    for(i=1 ; i<=n; i++)
    {
        printf("Enter a num : ");
        scanf("%f" ,&a);
        sum = sum + a;
    } 
    avg=sum/n;
    printf("Sum is = %f\n" ,sum);
    printf("Average is = %f " ,avg);
    return 0;
}