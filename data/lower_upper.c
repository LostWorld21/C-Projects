#include <stdio.h>
int main()
{
	char a;
	printf("Enter the alphabet: ");
	scanf("%c", &a);
	
	if (a >= 97 && a <= 122) {
		a= a-32;
		printf("The entered character is in lowercase \nAfter converting the character to uppercase is %c", a);
	}
	else if(a >=65 && a <= 90)
		printf("The entered character is already in Uppercase : %c",a);
	else
		printf("Invalid character");
	return 0;
}
