#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
    while(a<b)
    {
        printf("%d",a);
        a=a+1;
    }
    return 0;
}
