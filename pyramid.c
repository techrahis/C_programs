#include <stdio.h>
void main()
{
    int n, w, i, j, f = 1;
    printf("Enter the number of rows>> ");
    scanf("%d", &n);
    do
    {
        for (w = 1; w <= n - i; w++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                f = 1;
            else
                f = f * (i - j + 1) / j;
            printf(" %3d", f);
        }
        printf("\n");
        if (++i == 2)
            continue;
        else
            i++;
    } while (i < n);
}