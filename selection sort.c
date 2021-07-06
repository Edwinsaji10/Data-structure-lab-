#include<stdio.h>
int smallest (int arr[],int k,int n);
int selection_sort(int arr[],int n);
int main()
{
    int arr[20],n,i;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Before sort:\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    selection_sort(arr,n);
    printf("\nAfter sort:\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    
    return 0;
}
int smallest (int arr[],int k,int n )
{
   int small,pos,j;
   small=arr[k];
   pos=k;  
   for(j=k+1;j<n;j++)
   { 
     if(small>arr[j])
    {
    small=arr[j];
    pos=j;
    }
   }
  return pos ;
}

selection_sort(int arr[],int n)
{

  int k,pos,temp;
  for(k=0;k<n;k++)
   {
    pos=smallest (arr,k,n);
    temp=arr[k];
    arr[k]=arr[pos];
    arr[pos]=temp;
   }
}