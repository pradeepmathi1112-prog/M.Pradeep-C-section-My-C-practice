#include<stdio.h>
int main()
{
 int n; int found=0;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
   }
   int key;
   scanf("%d",&key);
   for(int i=0;i<n;i++)
   {
    if(arr[i]==key)
    {
     found=1;
     printf("Element found index=%d",i);
     break;
     }
     }
     if (found==0)
     {
      printf("Element is not found");
      }
}
