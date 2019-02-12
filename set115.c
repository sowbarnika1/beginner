int main()
{
     long int n,k,s=1,t,r;
    scanf("%ld %ld",&n,&k);
    t=k;
    while(k>0)
    {
        k=k/10;
        s=s*10;
    }
    s=s/10;
    while(t>0)
    {
        r=t/s;
        n=n*10+r;
        t=t%s;
        s=s/10;
    }
    printf("%ld",n);

    return 0;
}
