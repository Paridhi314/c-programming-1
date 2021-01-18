#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value : ");
    scanf("%d" ,&x);
    while(x<=50)
    {
        if(x>20)
        {
            printf("X is = %d" ,x);
            break;
        }
        printf("%d\n" ,x);
        x++;
    }
    return 0;

}