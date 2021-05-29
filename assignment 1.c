//text format of my code
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,p=2,k;
    int a,b,c,d;
    printf("Enter number of line >> ");
    scanf("%d",&n);
    if((n%2)==0)
    n=(n/2);
    else
    n=(n/2)+1;
    d=(n-1);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<p;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
        p++;
    }

    for(a=2;a<=n;a++)
    {
        for(c=d;c>=1;c--)
        printf(" ");
        for(b=1;b<=a;b++)
        printf("*");
        printf("\n");
        d--;
    }
    getch();
}   