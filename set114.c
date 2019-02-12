int main()
{
    int n,k,s=1;
    scanf("%d %d",&n,&k);
    for( int i=1;i<=k;i++)
    {
        s=s*n;
    }
    printf("%d",s);
    return 0;
}
