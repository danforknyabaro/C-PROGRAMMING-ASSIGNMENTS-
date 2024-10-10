#include<stdio.h>
int main(){
   int  CustomerID,  UnitsConsumed;
   float TotalBill, surcharge=0, ChargesperUnit;
   char CustomerName[20];

//CUSTOMER DETAILSu
   printf("enter CustomerID:");
   scanf("%d", &CustomerID);
   printf("enter CustomerName:");
   scanf("%s", &CustomerName);
   printf("enter UnitsConsumed:");
   scanf("%d", &UnitsConsumed);

//if ....else statements
if(UnitsConsumed<=199){
   ChargesperUnit=1.20;
}else if(UnitsConsumed>=200 & UnitsConsumed<400){
   ChargesperUnit=1.50;
}else if(UnitsConsumed>=400 &UnitsConsumed <600){
   ChargesperUnit=1.80;
}else{
   ChargesperUnit=2.00;
}
//CALCULATE TOTAL BILL
TotalBill=UnitsConsumed*ChargesperUnit;

//SURCHARGE 15% IF TOTAL BILL EXCEEDS 400 KSH.
if (TotalBill>400){
   surcharge=TotalBill*0.15;
   TotalBill+=surcharge;
}
//TOTAL BILL MUST BE MORE THAN 100 KSH.
if (TotalBill<100){
   TotalBill=100;
}
//OUTPUT DISPLAY
printf("CustomerID:%d\n", CustomerID);
printf("CustomerName:%s\n", CustomerName);
printf("UnitsConsumed:%d\n", UnitsConsumed);
printf("ChargesperUnit:%.2f\n", ChargesperUnit);
printf("TotalAmoount_to_Pay:%.2f\n", TotalBill);
return 0;
}