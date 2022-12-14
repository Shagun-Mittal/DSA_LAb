#include <stdio.h>

void matrice_prod(int a[10][10],int b[10][10],int m,int n,int p,int q)
{
	int i,j,k,c[m][q];
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	printf("\nMultiplied array : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			printf("%d  ",c[i][j]);
		printf("\n");
	}
}

int main()
{
	int i,j,a[10][10],b[10][10],m,n,p,q;
	printf("Enter the size of matrix a : \n");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("Enter the size of matrix b : \n");
	scanf("%d",&p);
	scanf("%d",&q);

	if(n!=p)
	{
		printf("Cannot be multiplied \n");
		return 1;
	}

	printf("Enter the elements of a : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

	printf("Enter the elements of b : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	}

	matrice_prod(a,b,m,n,p,q);
	return 0;
}