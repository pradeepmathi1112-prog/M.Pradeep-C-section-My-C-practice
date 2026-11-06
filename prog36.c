#include<stdio.h>
int sub(int a, int b)
{
 printf("%d",a-b);
 }
 int checkAandB(int a, int b)
 {
  printf("%d",a=b);
 }
 int main()
 {
  int a,b;
  scanf("%d%d",&a,&b);
  sub(a,b);
  checkAandB(a,b);
  return 0;
  }
