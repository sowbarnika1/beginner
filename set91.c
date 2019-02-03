int main()
{
     int a,b,c,d,df,df1;
   scanf("%d %d",&a,&b);
   scanf("%d %d",&c,&d);
   if(a>b)
   {
       df=a-b;
   }
   else
   {
       df=b-a;
   }
   if(c>d)
   {
       df1=c-d;
   }
   else
   {
       df1=d-c;
   }
   printf("%d\n%d",df,df1);
  return 0;
}
