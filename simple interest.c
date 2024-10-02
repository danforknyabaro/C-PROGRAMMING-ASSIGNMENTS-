#include <stdio.h>
int main(){
int principal, rate, time, simple_interest;
printf("enter principal amount:");
scanf("%d", &principal);
printf("enter rate of interest:");
scanf("%d", &rate);
printf("enter time(in years):");
scanf("%d", &time);
simple_interest=(principal*rate*time)/100;
printf("The simpleInterest is:%d\n", simple_interest);
return 0;
}