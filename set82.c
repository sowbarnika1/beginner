int main()
{
    char a[20];
    int i,f=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A' || a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
        f=1;
        break;
    }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
