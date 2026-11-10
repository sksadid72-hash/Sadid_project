#include<stdio.h>
double triangle_area(double base,double height);
int main()
{
    double height,base;

    printf("Enter the height number:");
    scanf("%lf",&height);

    printf("Enter the base :");
    scanf("%lf",&base);

    double area = triangle_area(base,height);
    printf("Area = %.2f\n",area);

     return 0;

}
double triangle_area(double base,double height)
{
    return 0.5*base*height;
}
