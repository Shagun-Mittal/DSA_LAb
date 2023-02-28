#include<stdio.h>
int Second_largest(int arr[],int n)
{
	int i,l,sl;
	l=arr[0];
	sl=arr[0];
	for(i=0;i<n;i++)
	{
	if(arr[i]>l)
	{
	sl=l;
	l=arr[i];
	}
	if(arr[i]>sl && arr[i]<l)
	{
	sl=arr[i];
	}
	}
	return sl;
}

int main()
{
	int i,n;
	printf("Enter number of elements : \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the element : \n");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("Second largest element is : %d \n",Second_largest(array,n));
	return 0;
}