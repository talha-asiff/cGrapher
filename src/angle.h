#include<stdio.h>
int main()
{
    float angle;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);
    float radians = angle * 3.14159 / 180;
    printf("The angle in radians is: %f\n", radians);
    return 0;
}