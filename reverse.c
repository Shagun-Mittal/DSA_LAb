#include<stdio.h>
void Reverse(int *p,int n)
{  int i,temp; 
   for(i=0;i<n/2;i++){
     temp = *(p+i);
     *(p+i) = *(p+n-i-1) ;
     *(p+n-i-1) = temp;
   }
 	
}
void main()
{
	int n,i,*p,arr[30];
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	printf("Enter elements:\n"); 
    for(i=0;i<n;i++){
     scanf("%d", &arr[i]);
    }
    p=arr;
    Reverse(p,n);
    printf("Reversed array:\n"); 
    for(i=0;i<n;i++){
     printf("%d \n", arr[i]);
    }

}