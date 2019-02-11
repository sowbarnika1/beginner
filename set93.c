int main()
{
 long int a,c,d;
 char b;
 scanf("%ld %c %ld",&a,&b,&c);
 if(b==37)
 {
     d=a%c;
 }
 if(b==47)
 {
     d=a/c;
 }
 printf("%ld",d);
 return 0;
}
