#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,s;
    scanf("%d %d",&n,&k);
    s=n+k;
    if(s%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
getch();
}
