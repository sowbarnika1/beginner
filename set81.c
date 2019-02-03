int main()
{
    char a[30],b[30];
    int i,j=0,k=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        b[k]=a[i];
        k++;
    }
    k=0;
    for(i=0;i<j;i++)
    {
        if(a[i]==b[i])
        {
            k++;
        }
    }
    if(k==j)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
