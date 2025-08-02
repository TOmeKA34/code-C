#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    printf(" *** Summation of common factor ***\n");
    printf("Enter two positive numbers : ");
    scanf("%d %d", &a, &b);

    int limit = (a < b) ? a : b;

    for (int i = 1; i <= limit; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            sum += i;
        }
    }

    printf("Summation of common factors (%d and %d) ==> %d\n", a, b, sum);

    return 0;
}
