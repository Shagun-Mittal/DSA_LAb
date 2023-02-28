#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **ptr, int r, int c){
    printf("Enter elements for matrix\n");
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            scanf("%d", &ptr[i][j]);


        }
    }
}

void displayMatrix(int **ptr3, int r, int c){
    printf("Displaying Matrix\n");
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            printf("%d\t", ptr3[i][j]);
        }
        printf("\n");
    }
}

void productMatrix(int **ptr1, int **ptr2, int **ptr3, int r, int c){
    int i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            ptr3[i][j]=0;
            for(k=0;k<c;k++)
                
            {
                ptr3[i][j] += (ptr1[i][k]*ptr2[k][j]);
            }
        }
    }
}


void main(){
    int r,c;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);
    int **ptr1, **ptr2, **ptr3;
    int i,j;
    ptr1 = ptr2 = ptr3 = (int**) malloc(r * sizeof(int));
    for (i = 0; i<r; i++){
        ptr1[i] = ptr2[i] = ptr3[i] = (int*) malloc(c * sizeof(int));        
    }
    readMatrix(ptr1, r, c);
    readMatrix(ptr2, r, c);
    productMatrix(ptr1, ptr2, ptr3, r, c);
    displayMatrix(ptr3, r, c);
}