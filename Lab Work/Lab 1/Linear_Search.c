#include<stdio.h>
int Lsearch(int arr[],int n,int f)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(f==arr[i])
	return(i+1);
	}
	return 0;
}

int main()
{
	int n,i,f;
	printf("Enter value of number of elements : \n");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	int array[n];
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("Enter element to be found : \n");
	scanf("%d",&f);
	if(Lsearch(array,n,f)==0)
	printf("\n NOT FOUND \n");
	else
	printf("\nFound at position %d \n",Lsearch(array,n,f));
	return 0;
}