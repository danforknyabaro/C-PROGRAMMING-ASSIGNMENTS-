#include <stdio.h>
#include <math.h>
int main(){
double amount, principal, rate, numberofcompoundings, time, compoundInterest;

printf("enter principal:");
scanf("%lf",&principal);
printf("enter interest rate:");
scanf("%lf",&rate);
rate=rate/100;
printf("enter numberofcompoundings:");
scanf("%lf",&numberofcompoundings);
printf("enter time(in years):");
scanf("%lf",&time);
amount=principal* pow((1+rate/numberofcompoundings),(numberofcompoundings*time));
compoundInterest=amount-principal;
printf("the compoundinterest is:%lf\n",  compoundInterest);

return 0;
}