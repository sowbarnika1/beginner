int main()
{
    int a[100],n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
    return 0;
}
