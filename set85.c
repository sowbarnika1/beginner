int main()
{
    char a[20];
    int i,c=0,m;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    
    if(c%2==0)
    {
        m=c/2;
        a[m-1]='*';
        a[m]='*';
    }
    else
    {
        m=c/2;
        a[m]='*';
    }
    printf("%s",a);
    return 0;
}
