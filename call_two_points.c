#include<stdio.h>
struct points
{
    double x1;
    double x2;
    double y1;
    double y2;
    double midpoint_of_x;
    double midpoint_of_y;
};
int main()
{
    struct points d;
    printf("x1  x2 :");
    scanf("%lf %lf",&d.x1,&d.x2);

    printf("y1  ,  y2 :");
    scanf("%lf %lf",&d.y1,&d.y2);

    d.midpoint_of_x=(double)((d.x1+d.x2)/2);
    d.midpoint_of_y=(double)((d.y1+d.y2)/2);

    printf("midpoint :%.2lf , %.2lf",d.midpoint_of_x,d.midpoint_of_y);
}
//Define a function that takes two points, and finds their midpoint.
//Use the point structure defined above to take both input and output.
