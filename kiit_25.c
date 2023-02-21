// Write a C program to display the message “KIIT Silver Jubilee” if the entered year is 25 otherwise display “Wrong input”.

#include <stdio.h>
int main ()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	if(year == 2022)
	printf("KIIT Silver Jubilee");
	else
	printf("Wrong Input");
	return 0;
}
