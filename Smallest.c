#include <stdio.h>
#include <stdlib.h>

void Smallest(int *data, int n){
    for (int i = 1; i < n; ++i) {
        if (*data > *(data + i)) {
            *data = *(data + i);
        }
    }
}

int main() {
  int n,*data;
  printf("Enter the total number of elements:\n ");
  scanf("%d", &n);
  data = (int *)calloc(n, sizeof(int));
  if (data == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }
  printf("Enter elements: \n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", data + i);
  }
  Smallest(data, n);
  printf("Smallest number = %d\n", *data);
  free(data);
  return 0;
}