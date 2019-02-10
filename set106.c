int main()
{
     int a,b,c,n,i;
     int sum = 0;
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     n = a + (c - 1) * b;
     for(i=a;i<=n;i=i+b)
     {
             sum=sum+i;

     }
     printf("%d",sum);
    return 0;
}
