int main()
{
    int n,q,p=1,t;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        p=p*10;
    }
    p=p/10;
        while(n>0)
        {
            q=n/p;
            if(q%2!=0)
            {
                printf("%d ",q);
            }
            n=n%p;
            p=p/10;
        }
    
return 0;
}
