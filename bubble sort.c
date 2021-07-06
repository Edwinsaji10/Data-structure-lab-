#include<stdio.h>

int main()
{
   int n,i,j,temp,a[20];
   printf("Enter the size of array\n");
   scanf("%d",&n);
   printf("Enter array elements\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\nArray before sort:\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   for(j=1;j<=n;j++)
  {
    for(i=0;i<n-j;i++)
    {
      if(a[i]>a[i+1])
      {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
       }
      
    }
   }
   printf("\nArray after sort:\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);  
    return 0;
}