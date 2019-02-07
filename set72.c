#include<stdio.h>
int main()
{
    char a[50];
    int i,n=0,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
     n++; 
     if(a[i]=='0' || a[i]=='1')
     {
         c++;
     }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
