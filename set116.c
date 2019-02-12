int main()
{
     int n,k,a[10],i,s=0;
     scanf("%d %d",&n,&k);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
             if(a[i]%2!=0)
             {
                 s++;
             }
             if(s==k)
             {
                 printf("%d",a[i]);
                 s=0;
             }
        
    }
    return 0;
}
