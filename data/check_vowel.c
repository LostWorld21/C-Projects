//WAP to read a character from the user and test wheather it is a vowel or consonentor not an alphabet.

#include <stdio.h>
int main()
{
	char a;
printf("Enter the alphabet: ");
scanf("%c", &a);
{
	if( a == 'a' || a == 'e'|| a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E'|| a == 'I' || a == 'O' || a == 'U')
	printf("The entered alphabet is a vowel");
    else if((a >= (int)'a' && a <= (int)'z')|| (a >= (int)'A' && a <= (int)'Z'))
    printf("The entered alphabet is a consonent");
    else 
	printf("The entered character is not an alphabet");
}
return 0;
}
