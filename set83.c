int main()
{
    int n,r1,r2,i,c=0;
    scanf("%d %d %d",&n,&r1,&r2);
    for(i=r1+1;i<r2;i++)
    {
        if(n==i)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
