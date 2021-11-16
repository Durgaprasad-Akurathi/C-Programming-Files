#include<stdio.h>
int main()
{
	int size, i, item, low, high, mid;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array contents:");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray: ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Enter the value to be searched: ");
	scanf("%d",&item);
	low = 0;
	high = size-1;
	mid = (low+high)/2;
	
	while(low <= high)
	{
		if(arr[mid < item])
		{
			low = mid+1;
		}
		else if (arr[mid] == item)
		{
			printf("\n%d found at location %d",item,(mid+1));
			break;
		}
		else
		{
			high = mid-1;
		}
		mid = (low+high)/2;
	}
	if(low > high)
	  printf("item not found!!");
	return 0;
}
