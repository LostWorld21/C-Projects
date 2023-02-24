/*WAP to input any two integers, and provide a menu to the user to select any of the options
as add, subtract, multiply, divide and display the result accordingly.*/

#include <stdio.h>
int main()
{
	int x, y, r, op;
	printf("Enter the 1st number= ");
	scanf("%d", &x);
	printf("Enter the 2nd number= ");
	scanf("%d", &y);
	printf("Option: 1. Add  2. Substract  3. Multiply  4. Divide");
	printf("\nEnter your option= ");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
		r=x+y;
		printf("The result is= %d", r);
		    break;
		case 2:
		r=x-y;
		printf("The result is= %d", r);
		    break;
		case 3:
		r=x*y;
		printf("The result is= %d", r);
			break;
		case 4:
		r=x/y;
		printf("The result is= %d", r);
			break;

	default:
		printf("Invalid Input");
	}
}
