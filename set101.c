int main()
{
    int l,h,b,a,v;
    scanf("%d %d %d",&l,&b,&h);
    a=(l*b*h);
    v=(2*l*b)+(2*b*h)+(2*h*l);
    printf("%d\n%d",v,a);
    return 0;
}
