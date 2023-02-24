/*WAP to calculate the electric bill by inputting the previous and present meter reading. (The
bill amount for 1st 100 units Rs 1.40 per unit, for next 100 units Rs 2.50 per unit and for
rest units Rs 3.20 per unit).*/

#include<stdio.h>
int main()
{
	int x,y, unit;
	float rate;
	printf("Enter the previous meter reading= ");
	scanf("%d", &x);
	printf("Enter the present meter reading= ");
	scanf("%d", &y);
	unit=y-x;
	if(unit<=100 && unit>=0)
	rate=unit*1.40;
	
	if(unit>=200 && unit<=101)
	rate=(100*1.40)+((unit-100)*2.50);
	
	if(unit>=201)
	rate=(100*1.40)+(100*2.50)+((unit-200)*3.20);
	
	else
	rate= unit*1.40;
	
	printf("The total amount is= %f", rate);
}
