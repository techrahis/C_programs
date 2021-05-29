#include <stdio.h>

void main()
{
    int i, c = 0, n, sum, a = 0, b = 1;
    printf("Enter number of terms>>");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum += c;
        a = b;
        b = c;
        c = a + b;
    }
    printf("Summation = %d ", sum);
}