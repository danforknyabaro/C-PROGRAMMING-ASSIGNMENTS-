//FOR LOOP

#include<stdio.h>
int main(){
int firstnumber, lastnumber, currentnumber;
float sum=0;

//ENTER INPUT
printf("enter firstnumber:");
scanf("%d", &firstnumber);
printf("enter lastnumber:");
scanf("%d", &lastnumber);

for(currentnumber=firstnumber;currentnumber<=lastnumber;currentnumber++){
printf("%d\n", currentnumber);
sum=sum+currentnumber;
}
printf("%.2f", sum);
return 0;
}