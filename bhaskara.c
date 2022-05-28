#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Write the value of a: \n");
    scanf("%f", &a);
    printf("Write the value of b: \n");
    scanf("%f", &b);
    printf("Write the value of c: \n");
    scanf("%f", &c);
    float d = pow(b, 2) - 4*a*c;
    if (d < 0) {
        printf("The equation doesnt have real roots \n");
    }
    float x1 = (-b + sqrt(d))/2*a;
    float x2 = (-b - sqrt(d))/2*a;
    printf("The value of x1 is %f \n", x1);
    printf("The value of x2 is %f \n", x2);
    return 0;
}
