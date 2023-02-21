//WAP to convert temperature from centigrade to Fahrenheit scale.
#include <stdio.h>
int main()
{
	float t_cent, t_farh;
	printf("Enter the temperature in Centigrade: ");
    scanf("%f",&t_cent);
	t_farh = (((9.0/5.0)* t_cent)+32);
	printf("\n%f centigrade = %f Fahrenheit",t_cent, t_farh);
	return 0;
}
