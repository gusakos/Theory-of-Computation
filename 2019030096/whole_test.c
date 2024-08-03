#include "lambdalib.h"


typedef struct Book {
char *  title, isbn;
Person author;
int numOfCopies;
double price;

void setBook(char *  t, Person a, int numOfCopies, double price) {
title = t;
author = a;
numOfCopies = numOfCopies;
price = price;

} 
void printBook() {
write("Title: %s\n", title) ;
writeStr("Author:") ;
author.printPersonInfo() ;
write("Price:%f\n", price) ;
write("Number of available copies: %d\n", numOfCopies) ;

} 
} Book ;

const int book = 3 + 2;
 int book[2];
 const boolean bool3 = 1;
 const char *  string1 = "All books";
 const int array1[3] = 3 + 2;
 const *int arra2[] = 3 + 2;
 
int prime(int n) {
int i;
 int result, isPrime;
 
if ( n < 0 ) {
result = prime(n);

}
else {
if ( n < 2 ) {
result = 0;

}
else {
if ( n == 2 ) {
result = 1;

}
else {
if ( n % 2 == 0 ) {
result = 0;

}
else {
i = 3;
isPrime = 1;
while ( isPrime && (i < n / 2) ) {
isPrime = n % i != 0;
i = i + 2;

}
result = isPrime;

}

}

}

}

return result;
}

int main() {
limit = readInteger();
writeInteger(2) ;
writeStr(" ") ;
counter = 1;
for ( int num = 3 ; num < limit + 1 ; num + (2) ) {
if ( prime(num) ) {
counter = counter + 1;
writeInteger(num) ;
writeStr(" ") ;

}

}
writeStr("\nThe total number of primes found is:") ;
writeInteger(counter) ;
writeStr("\n") ;

return 0;
}

Accepted!
