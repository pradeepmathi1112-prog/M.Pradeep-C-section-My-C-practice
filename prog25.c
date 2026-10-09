#include<stdio.h>
int main()
{
 int x,y,z,profit;
 scanf("%d%d%d",&x,&y,&z);
 profit = x * (y-z) - 100;
 printf("%d",profit);
 return 0;
 }
