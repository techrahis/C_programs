#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,p=4;
    for(i=1;i<=5;i++)
    {
        for(k=p;k>=1;k--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
        p--;
    }
    getch();
}   