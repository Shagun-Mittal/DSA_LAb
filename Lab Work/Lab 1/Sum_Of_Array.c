#include<stdio.h>
int Add(int arr[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	s+=arr[i];
	return s;
}

int main()
{
	int n,i;
	printf("Enter value of n : \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("\n Sum of elements : %d \n",Add(array,n));
	return 0;
}