#include<stdio.h>
int main()
{ float side1, side2, side3, s , m;
    printf("\n \n#FOR TRIANGLE#\n");
    printf("enter first side of triangle: ");
    scanf("%f", &side1);
    printf("enter second side of triangle: ");
    scanf("%f", &side2);
    printf("enter third side of triangle: ");
    scanf("%f", &side3);
    s = (side1 + side2 + side3)/2;
    m = sqrt (s * (s-side1)*(s-side2)*(s-side3));
    printf("AREA=%f", m);
    printf("\ncircumference=%f", side1 + side2 + side3);
}
