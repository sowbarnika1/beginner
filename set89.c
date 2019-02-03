int main()
{
    int n,m,i,d,k,flag=0;
    scanf("%d %d",&n,&m);
    d=n*m;
    if(n>m)
    {
        n=n;
    }
    else
    {
        n=m;
    }
    for(i=2;i<=n;i++)
    {
       k=i*i;
       if(k==d)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
