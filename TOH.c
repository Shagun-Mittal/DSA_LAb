#include <stdio.h>
int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{   static int count = 0;
    if (n == 1)
    {
        count+=1;
        return count;
       
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    count += 1;   
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
 
int main()
{
    int n; 
    printf("Enter no. of disks: \n");
    scanf("%d" , &n);
    printf("Total no. of moves needed is: %d\n" , towerOfHanoi(n, 'A', 'C', 'B')); 
    return 0;
}