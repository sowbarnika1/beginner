#include<stdio.h>
#include<conio.h>
int main()
{
     int n,i,flag=0;
     scanf("%d",&n);
     if(n>='0' && n<='10000')
     {
     for(i=n;;i++)
     {
         if(i%10==0)
         {
             printf("%d",i);
             break;
         }
}
}
return 0;
}
