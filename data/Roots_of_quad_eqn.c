#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, r1, r2;
    printf("Enter the value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (a==0 && b==0)
    	printf("There is no solution of the quadratic equation");
	else if (d==0)
    {
    	r1=r2= -1*b/(2.0*a);
    	printf("The value of roots of the quadratic equation is : %f", r1);
	}
	else if (d<0)
		printf("The equation does not have real roots");
	else
	{
    	r1 = (-b + (sqrt(b*b) - (4.0 * a * c)))/(2*a);
    	r2 = (-b - (sqrt(b*b) - (4.0 * a * c)))/(2*a);
    	printf("The value of roots of the quadratic equation is : %f and %f", r1, r2);
	}
    return 0;
}
