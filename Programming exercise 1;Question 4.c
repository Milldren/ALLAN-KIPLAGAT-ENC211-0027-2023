#include <stdio.h>

int main (void)
{
   int a = 0;
   while (a <= 100)
   {
    printf("Enter value :");
    scanf("%d", &a);
    printf("%6.2f mi = %6.2f km\n",
          a, a * 1.6);
          a = a + 10;
   }
    return 0;
}
