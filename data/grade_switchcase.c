/*WAP to display the grade system of KIIT University based on total marks secured by a
student in a semester. Use switch-case statement. Calculate the grade of the student
according to the percentage of the mark:*/

#include <stdio.h>
int main()
{
	int mark, x;
	printf("Enter the mark obtained= ");
	scanf("%d", &mark);
	x=mark/10;
		switch(x)
		{
		    case 10:
			case 9:
				printf("Grade = O");
				break;
			case 8:
				printf("Grade = E");
				break;
			case 7:
				printf("Grade = A");
				break;
		    case 6:
				printf("Grade = B");
				break;
			case 5:
				printf("Grade = C");
				break;
			case 4:
				printf("Grade = D");
				break;
				default:
					printf("Grade = F");
					
	}
	
}
