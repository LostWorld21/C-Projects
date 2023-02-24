/*WAP to display the grade system of KIIT University based on total marks secured by a
student in a semester. Use else...if ladder statement.*/

#include<stdio.h>
int main()
{
	int x;
	printf("Enter the mark obtained= ");
	scanf("%d", &x);
	if(x>=90)
	printf("Grade= O");
	
	else if (x>=80)
	printf("Grade= E");
	else if (x>=70)
	printf("Grade= A");
	else if (x>=60)
	printf("Grade= B");
	else if (x>=50)
	printf("Grade= C");
	else if (x>=40)
	printf("Grade= D");
   else
   printf("Grade= F");
}
