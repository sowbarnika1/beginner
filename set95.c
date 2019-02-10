 int main()
  {
      char a[100],b[100],c[100];
      int i,j=0,k=0;
      for(i=0;i<100;i++)
      {
          b[i]='\0';
          c[i]='\0';
      }
      scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      {
          if(i%2==0)
          {
              b[j]=a[i];
              j++;
          }
          else
          {
              c[k]=a[i];
              k++;
          }
      }
      printf("%s %s",b,c);
      return 0;
  }
