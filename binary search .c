#include<stdio.h>

int main()
{
  int n,i,a[20],item,beg,end,pos,mid;
  printf("Enter array size\n");
  scanf("%d",&n);
  printf("Enter array elements\n");
  for(i=1;i<=n;i++) 
 { 
  scanf("%d",&a[i]);
 }
  printf("***Array***\n");
  for(i=1;i<=n;i++) 
 {
  printf("%d\t",a[i]);
 }
  printf("\nEnter item for search\n");
  scanf("%d",&item);
  beg=1;
  end=n;
  pos=-1;
  while(beg<=end)
{
  mid=(beg+end)/2;
  if(a[mid]==item)
  { 
  pos=mid;
  printf("%d found at %d\n",item,pos);
  break;
  }
  else
 {
   if(item<mid)
    {
     end=mid-1;
    }
   else
   {
   beg=mid+1;
   }
 }
}
  if(pos==-1)
  printf("Item not found");    
    
    return 0;
}