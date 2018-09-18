#include <stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even.", number);
    else if(number % 2!==0)
        printf("%d is odd.", number);
    else
        printf("invalid number");
    return 0;
    getch();
}
