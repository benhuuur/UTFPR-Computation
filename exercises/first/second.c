#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    float determinant;
    float x, y;

    printf("System of equations");
    printf("ax + by = c");
    printf("dx + ey = f");

    printf("\nEnter the coefficients:\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    printf("d: ");
    scanf("%f",&d);
    printf("e: ");
    scanf("%f",&e);
    printf("f: ");
    scanf("%f",&f);

    determinant = a*e - b*d;
    x = (c*e - b*f) / determinant;
    y = (a*f - c*d) / determinant;

    printf("\n%.0fx + %.0fy = %.0f\n",a,b,c);
    printf("%.0fx + %.0fy = %.0f\n",d,e,f);
    printf("\nx = %.2f  y = %.2f\n",x,y);
}