 int main()
   {
       int a[100],n,m=1,i;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
           m=m*a[i];
       }
       printf("%d",m);
       return 0;
   }
