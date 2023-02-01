#include<stdio.h>
int main()
{
     int a;
     printf("Enter your Person : ");
     scanf("%d",&a);
     if(a>17)
          printf("\nYou are eligible for voting");
     else
          printf("\nYou are not eligible for voting\nYou are allowed to vote after %d years",18-a);
     return 0;
}
w
