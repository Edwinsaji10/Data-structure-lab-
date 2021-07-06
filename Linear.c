#include <stdio.h>
 
int main()
{ 
	int a[20],j=1,p,pos=-1,i,n;
	printf("Enter the  size of array");
	scanf("%d",&n);
	printf("Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf ("Enter element to be searched");
scanf("%d",&p);
while(j<=n)
{
 if(a[j]==p)
{
pos=j;
printf("%d at location %d",p,pos);
}
j=j+1;
}
if(pos==-1)
printf("Element not present");

	return 0;
}
 
    