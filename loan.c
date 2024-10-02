#include <stdio.h>
int main(){
	
	int Id_number, age, annual_income;
	
	printf("enter Id_number:");
	scanf("%d",&Id_number);
	printf("enter age:");
	scanf("%d", &age);
	printf("annual_income(in Sh.):");
	scanf("%d", &annual_income);
	
	if(age>= 21 & annual_income >= 21000){
		printf("Congratulations you qualify for a loan.");
	} else {
		printf("Unfortunately, we are unable to offer you a loan at this time.");
	return 0;
}}