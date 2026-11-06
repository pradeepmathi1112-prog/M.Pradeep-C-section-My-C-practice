#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 int sum=0;
 int average;
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
  sum=sum+arr[i];
  average=sum/n;
  }
  printf("Average = %d",average);
  return 0;
  }
