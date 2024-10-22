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
    strcpy(book.title, "Introduction to C Programming");
    strcpy(book.author, "John Smith");
    book.publication_year = 2022;
    strcpy(book.ISBN, "9780131103627");
    book.price =49.99;

// PRINT THE VALUES
   printf("TITLE:%s\n", book.title);
   printf("AUTHOR:%s\n", book.author);
   printf("Publication year:%d\n", book.publication_year);
   printf("ISBN:%s\n", book.ISBN);
   printf("PRICE:%.2f\n", book.price);
return 0;
}