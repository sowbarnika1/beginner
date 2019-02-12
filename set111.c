int main()
{
    char a[100],t[10];
    int n,i,c=0,j=0;
    for(i=0;i<10;i++)
    {
        t[i]='\0';
    }
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=1;i<=n;i++)
    {
        t[j]=a[c-1];
        c--;
        j++;
    }
printf("%s",t);
    return 0;
}
