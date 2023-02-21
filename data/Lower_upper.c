#include <stdio.h>
int main()
{
	char a;
printf("Enter the alphabet: ");
scanf("%c", &a);
{
	if (a >= 97 && a <= 122)
	a= a-32;
	printf("\nThe entered character is in lowercase \nAfter converting the character to uppercase is %c", a);
	}
return 0;
}
