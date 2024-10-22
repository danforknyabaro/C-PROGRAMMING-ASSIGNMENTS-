/*AUTHOR:DANFORK NYABARO RIOBA
REGNO:CT101/G/22287/24
COURSE:COMPUTER SCIENCE
DATE:20/10/2024
*/
#include<stdio.h>
#include<string.h>//strcpy()
struct book
{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;

}book;

int main(){
//struct book
printf("BOOK TITLE:");
scanf("%s", &book.title);
printf("BOOK AUTHOR:");
scanf("%s", &book.author);
printf("PUBLICATION YEAR:");
scanf("%d", &book.publication_year);
printf("ISBN:");
scanf("%s", &book.ISBN);
printf("PRICE:");
scanf("%f", &book.price);

// PRINT THE VALUES
   printf("TITLE:%s\n", book.title);
   printf("AUTHOR:%s\n", book.author);
   printf("Publication year:%d\n", book.publication_year);
   printf("ISBN:%s\n", book.ISBN);
   printf("PRICE:%.2f\n", book.price);
return 0;
}