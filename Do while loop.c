// do while
#include <stdio.h>
int main(){
	int  firstnumber, lastnumber, currentnumber;
	float sum=0;
	printf("enter the firstnumber:");
	scanf("%d", &firstnumber);
	printf("enter the lastnumber:");
	scanf("%d", &lastnumber);

	currentnumber = firstnumber;

	do{
		printf("%d\n", currentnumber);
		sum=sum+currentnumber;
		currentnumber++;
	}while(currentnumber<=lastnumber);
	printf("%.2f", sum);

	return 0;
	}