#include <stdio.h>

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num == (int)num)
    {
        printf("The number is real.");
    }
    else
    {
        printf("The number is not real.");
    }

    return 0;
}
