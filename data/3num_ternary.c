// Write a C program to find out the largest among three numbers using ternary operator

#include <stdio.h>
float main()
{
	float a, b, c;
	printf("Enter three integers: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("%f",(a>b)?(a>c)?a:c:((b>c)?b:c));
	return 0.0;
}
