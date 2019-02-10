int main()
{
    char a[100],t;
      int i,j,c=0;
      scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      {
          c++;
      }
      for(i=0;i<c;i++)
      {
          for(j=i+1;j<c;j++)
          {
              if(a[i]>a[j])
              {
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
              }
          }
      }
      printf("%s",a);
      
    return 0;
}
