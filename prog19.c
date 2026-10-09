#include<stdio.h>
int main()
{
 int a,b,c,d;
 scanf("%d%d",&a,&b);
 c = (b - a)/100;
 d = (b - a)%100;
 printf("%d.%d",c,d);
 return 0;
 }
