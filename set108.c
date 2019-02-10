int main()
    {
        int a[100],n,i,j,t,b[100],k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            b[k]=a[i];
            k++;
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=a[i];
                }
            }  
            
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                printf("%d",i);
            }
        }
        return 0;
    }
