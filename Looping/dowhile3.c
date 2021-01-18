#include<stdio.h>
int main()
{
    int num;
    do{
        printf("Enter a number: ");
        scanf("%d" ,&num);
        fflush(stdin);

    }
    while(num>1);
    return 0;
}