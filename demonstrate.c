#include <stdio.h>
#include <stdlib.h>

int* pointer(int *a, int *b){
    *a = *a + *b;
    return a; // returning a pointer from function
}

void main(){
    printf("Enter two numbers a & b:\n");
    int **ptr,a,b,*c;
    scanf("%d", &a);
    scanf("%d", &b);
    c = pointer(&a, &b); //passing a pointer in a function
    ptr = &c; // assigning pointer to pointer
    printf("a + b = %d\n", **ptr);
}