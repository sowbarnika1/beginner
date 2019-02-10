int main()
  {
      char a[100];
      int i,j,c=0,n=0;
      scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      {
          c++;
      }
      for(i=0;i<c;i++)
      {
      for(j=0;j<c;j++)
          {
              if(i!=j && a[i]==a[j])
              {
                  break;
              }
          }
              if(j==c)
              {
                  n++;
              }
          
      }
      if(n==c)
      {
          printf("yes");
      }
      else
      {
          printf("no");
      }
      return 0;
  }
