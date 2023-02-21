//WAP to determine the roots of a quadratic equation ax^2+bx+c=0 using if-else statement
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, r1, r2; //d= determinant
    printf("Enter the value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (a==0)
    	printf("This isn't a quadratic equation");
	else if (d==0)
    {
    	r1=r2= -b/(2.0*a);
    	printf("The quadratic equation have equal roots i.e., : %f", r1);
	}
	else if (d<0)
		printf("The equation does not have real roots");
	else
	{
    	r1 = (-b + sqrt(d))/(2*a);
    	r2 = (-b - sqrt(d))/(2*a);
    	printf("The value of roots of the quadratic equation is : %f and %f", r1, r2);
	}
    return 0;
}
