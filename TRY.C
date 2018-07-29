#include <stdio.h>
  #define t 8
void     main()
 {



 int x=178;
 int y=219;
 int n=3;
 int p=3;

 int c,d,a,b;
 clrscr();
 a=x>>(p+n+1);
  a=a<<(p+n+1);
  b=x>>(t-(p+n-1));
  b=b<<(t-(p+n-1));
  b=x^b;
  x=a|b;
///////
c=y>>n;
c=c<<n;
d=y^c;
y=d<<(t-(p+n-1));
x=x|y;
printf("%d\n",x);
printf("x%d\n",b);
getch();

 }