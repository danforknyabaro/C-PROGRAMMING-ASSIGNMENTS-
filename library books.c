#include <stdio.h>
int main(){
	int Borrower_ID_NO, BookID, DueDate, ReturnDate, DAYSOVERDUE;
	float finerate=0, fineamount=0;
	//INPUT DATA
	printf("enter Borrrower_ID_NO:");
	scanf("%d", &Borrower_ID_NO);
	printf("enter BookID:");
	scanf("%d",&BookID);
	printf("enter DueDate:");
	scanf("%d",&DueDate);
	printf("enter ReturnDate:");
	scanf("%d",&ReturnDate);
	//CALUCATIONS OF THE DAYS OVERDUE
	DAYSOVERDUE= ReturnDate-DueDate;
	//if ...else statement
	if (DAYSOVERDUE <= 0){
		finerate=0;
		fineamount=0;
		printf("NO FINE");
	}else  if(DAYSOVERDUE <=7){
		finerate =20;
		fineamount= DAYSOVERDUE*finerate;
	}else if(DAYSOVERDUE <=14){
		finerate=50;
		fineamount=DAYSOVERDUE*finerate;
	}else{ 
		finerate=100;
		fineamount=DAYSOVERDUE*finerate;
	}
	//DISPLAYS
	printf("BookID: %d\n", BookID);
	printf("DueDate;: %d\n", DueDate);
	printf("ReturnDate: %d\n", ReturnDate);
	printf("DAYSOVERDUE: %d\n", DAYSOVERDUE);
	printf("finerate: %2f\n", finerate);
	printf("fineamount: %2f\n", fineamount);
return 0;
}