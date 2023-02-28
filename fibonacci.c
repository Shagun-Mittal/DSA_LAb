#include<stdio.h>
int fib(int n)
{
    if(n==0 || n==1)
    	return n;
    else
    	return fib(n-1) + fib(n-2);

}
int main()
{
	int num,i;
	printf("Print no. of elements for fibonacci series:");
	scanf("%d" , &num);
	for(i=0;i<num;i++)
		printf("%d\n", fib(i));
	return 0;

}