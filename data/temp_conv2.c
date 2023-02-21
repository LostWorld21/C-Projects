// Write a program to find fahrenheit for a given centigrade temperature

#include <stdio.h>
int main()
{
	float t_cent, t_farh;
	printf("Enter the temperature in Farh: ");
    scanf("%f",&t_farh);
	t_cent = ((t_farh-32)*5)/9.0;
	printf("The Temperature in centigrade = %f",t_cent);
	return 0;
}
