int main()
{

     int n,t=0,rem;
     scanf("%d",&n);
     while(n>0)
     {
         rem=n%10;
         t=t*10+rem;
         n=n/10;
     }
     printf("%d",t);

}
