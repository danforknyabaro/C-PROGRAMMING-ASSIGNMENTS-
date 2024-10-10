
#include <stdio.h>
int main(){
	int  firstnumber, lastnumber, currentnumber;
	float sum=0;
	
//PROMPT THE USER TO ENTER THE FIRST AND LAST NUMBERS
	printf("enter the firstnumber:");
	scanf("%d", &firstnumber);
	printf("enter the lastnumber:");
	scanf("%d", &lastnumber);
	
	currentnumber = firstnumber;

	while(currentnumber <= lastnumber){
	printf("%d\n",currentnumber);
	sum=sum+currentnumber;
	currentnumber++;
	}
	printf("%.2f", sum);
return 0;
}