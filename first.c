#include <stdio.h>
#include <math.h>

int main()
{

    int year = 2000;

    if(year % 400 == 0)
    {
        printf("%d Is Leap Year", year);
    }
    else if(year % 4 == 0 && year % 100 != 0)
    {
        printf("%d Is Leap Year", year);
    }
    else
    {
        printf("Leap year not possible");
    }

    return 0;
}
