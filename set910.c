int main()
{
    char a[100],b[100];
      int i,j=0;
      scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      {
              if(a[i]>='0' && a[i]<='9')
              {
                  b[j]=a[i];
                  j++;
              }
      }
      printf("%s",b);
      
    return 0;
}
