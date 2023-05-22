#include <stdio.h>
#include <math.h>

int main()
{
    int b, c;
    float a;
    printf("Введіть значення b:");
    scanf("%d", &b);
    printf("Ввведіть значення c:");
    scanf("%d", &c);
    if (b == 1)
    {
        a = 4 * b + 5 * c;
    }
    if (b == 2)
    {
        a = sqrt(4 - b * c);
        if ((b * c) > 4)
        {
            printf("Невизначене число.");
            return 0;
        }
    }
    if (b == 3)
    {
        a = (b - 2) / (c * c);
    }
    if (b < 1 || b > 3)
    {
        a = 0;
    }
    printf("a = %.2f", a);
    return 0;
}