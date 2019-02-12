int main()
{
    char a[100];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[0]>='a' && a[0]<='z')
        {
            a[0]=a[0]-32;
        }
        else
        {
            a[0]=a[0];
        }
        if(a[i]==' ')
        {
            if(a[i+1]>='a' && a[i+1]<='z')
        {
            a[i+1]=a[i+1]-32;
        }
        else
        {
            a[i+1]=a[i+1];
        }
        } 
    }
    puts(a);
    return 0;
}
