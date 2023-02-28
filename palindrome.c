#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int isPal(char str[],int s, int e)
{
    if (s == e)
      return 1;
 
    if (str[s] != str[e])
      return 0;
    if (s < e + 1)
      return isPal(str, s + 1, e - 1);
    return 1;
}
 

int main()
{
    char str[100];
    printf("Enter string: \n");
    scanf("%[^\n]s", str);
    if (isPal(str,0,strlen(str)-1) || strlen(str) == 0)
      printf("Yes string is Palindrome\n");
    else
      printf("No String is not Palindrome\n");
 
    return 0;
}