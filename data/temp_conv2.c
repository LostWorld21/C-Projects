// Write a program to find centigrade for a given fahrenheit temperature
#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in centigrade : ");
    scanf("%f", &c);
    f = ((9*5)*c)+32;
    printf("The temperature in fahrenheit is : %f", f);
    return 0;
}