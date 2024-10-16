#include<stdio.h>
// USE OF FUNCTIONS
float calculatecharges(int units){
   if (units <=199){
      return 1.20;
   } else if (units >=200 & units <400){
      return 1.50;
   } else if (units >=400 & units <600){
      return 1.80;
   }else {
      return 2.00;
   }
}
//FUNCTION TO CALCULATE TOTAL BILL
float calculatebill(int units){
   float ChargeperUnit = calculatecharges(units);
   float TotalBill = units * ChargeperUnit;
//SURCHARGE
   if(TotalBill >400){
      TotalBill=TotalBill*0.15;
   }
//MINIMUM BILL TO BE 100
   if (TotalBill <100){
      TotalBill=100;
   }
   return TotalBill;
}

int main(){
   int  CustomerID,  UnitsConsumed;
   float TotalAmount;
   char CustomerName[30];

//CUSTOMER DETAILS
   printf("enter CustomerID:");
   scanf("%d", &CustomerID);
   printf("enter CustomerName:");
   scanf("%s", &CustomerName);
   printf("enter UnitsConsumed:");
   scanf("%d", &UnitsConsumed); 

//CALCULATE TOTAL BILL
TotalAmount=calculatebill(UnitsConsumed);

//OUTPUT DISPLAY
printf("CustomerID:%d\n", CustomerID);
printf("CustomerName:%s\n", CustomerName);
printf("UnitsConsumed:%d\n", UnitsConsumed);
printf("ChargesperUnit:%.2f\n", calculatecharges(UnitsConsumed));
printf("TotalAmount_to_Pay:%.2f\n", TotalAmount);
return 0;
}