/*WAP to read a character from the user and convert it into lowercase alphabet if the entered
character is in uppercase and convert it into uppercase if the entered character is in
lowercase, otherwise display as it is.*/

#include <stdio.h>
int main()
{
	char a;
	printf("Enter the alphabet: ");
	scanf("%c", &a);
	
	if (a >= 65 && a <= 90) 
	{
		a= a+32;
		printf("The entered character is in uppercase \nAfter converting the character to lowercase is %c", a);
    }
    
	
	   else if(a >=97 && a <= 122)
	{ 
       	a=a-32;
		printf("The entered character is in lowercase \nAfter converting the character to uppercase is %c",a);
    }
	else
		printf("%c",a);
	return 0;
}
