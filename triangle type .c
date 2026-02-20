
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("The given sides form a valid triangle.\n");

        // Determine type
        if (a == b && b == c)
        {
            printf("It is an Equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("It is an Isosceles Triangle.\n");
        }
        else
        {
            printf("It is a Scalene Triangle.\n");
        }
    }
    else
    {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}
