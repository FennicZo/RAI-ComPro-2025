#include<stdio.h>
#include<math.h>

float triangle_area(float,float,float);

int main() {
    float a, b, c, area;
    
    printf("Enter three sides of the triangles: ");
    scanf("%f %f %f", &a, &b, &c);
    
    area = triangle_area(a, b, c);
    
    printf("Area of the triangle = %.2f\n", area);
    
    return 0;
}

float triangle_area(float a, float b, float c) {
    float s = (a+b+c)/2.0;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    return area;
}