#include<stdio.h>
int main()

{
int num;
printf("\nEnter a number:");
scanf("%d", &num);

if (num>70)
{printf("\nHurray!!You won the lottery");}
if (num<70)
{
    printf("oh!you loss");
}

return 0;
}
