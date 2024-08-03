#include "lambdalib.h"


typedef struct Address {
char *  street;
int number;
char *  city;

void setAddress(char *  s, int n, char *  c) {
street = s;
number = n;
city = c;

} 
void printAddress() {
write("Address: %s %d, %s\n", street, number, city) ;

} 
} Address ;
typedef struct Person {
char *  firstName, lastName;
char *  email;
int phone;
Address address;

void setPerson(char *  fn, char *  ln, char *  email, int phone, Address addr) {
firstName = fn;
lastName = ln;
email = email;
phone = phone;
address = addr;

} 
void printPersonInfo() {
write("%s %s, email: %s phone: %d\n", firstName, lastName, email, phone) ;
address.printAddress() ;

} 
} Person ;
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
typedef struct Order {
int orderNum;
Book book;
int quantity;
Address shippingAddress;
boolean delivered;

void setOrder(int orNum, Book b, int q, Address sh, boolean del) {
orderNum = orNum;
book = b;
quantity = q;
shippingAddress = sh;
delivered = del;

} 
} Order ;
typedef struct Bookstore {
char *  name;
Book listOfBooks[100];
int numOfBooks;
Order listOfOrders[100];
int numOfOrders;

void putOrder(Order o) {
listOfOrders[numOfOrders] = o;
numOfOrders += 1;

} 
void addBook(Book b) {
listOfBooks[numOfBooks] = b;
numOfBooks += 1;

} 
void printBookStoreBooks() {
for ( int i = 0 ; i < numOfBooks ; i++ ) {
listOfBooks[i].printBook() ;

}

} 
double calculateTotalOrdersIncome() {
double total;
 
for ( int i = 0 ; i < numOfOrders ; i++ ) {
if ( listOfOrders[i].delivered ) {
total = total + listOfOrders[i].quantity * listOfOrders[i].book;

}

}

return total;
}
} Bookstore ;

int orderId;
 Address a, a1;
 Person author;
 Book b;
 Bookstore bs;
 Order ord;
 
Address createAddress(char *  s, int n, char *  c) {
a.setAddress(s, n, c) ;

return a;
}
Person createPerson(char *  fn, char *  ln, char *  email, int phone, Address addr) {
p.setPerson(fn, ln, email, phone, addr) ;

return p;
}
Book createBook(char *  t, Person a, int numOfCopies, double price) {
b.setBook(t, a, numOfCopies, price) ;

return b;
}
Order createOrder(int orNum, Book b, int q, Address sh, int del) {
ord.setOrder(orNum, b, q, sh, del) ;

return ord;
}
Bookstore createBookstore(char *  n) {
bs.name = n;
bs.numOfBooks = 0;
bs.numOfOrders = 0;

return bs;
}

int main() {
a = createAddress("Stadiou", 10, "Stadiou");
author = createPerson("Christos", "Papadimitriou", "cpap@gmail.com", 12345, a);
b = createBook("Computation Theory", author, 34.3, 100);
bs = createBookstore("Papasotiriou");
bs.addBook(b) ;
a = createAddress("Wall Street", 10, "NY");
author = createPerson("Dennis", "Richie", "richie@gmail.com", 54321, a);
b = createBook("C Programming", author, 10.3, 100);
bs.addBook(b) ;
bs.printBookStoreBooks() ;
ord = createOrder(orderId, b, 2, a, 0);
orderId += 1;
bs.putOrder(ord) ;
write("Bookstore orders income: %.2f\n", bs.calculateTotalOrdersIncome()) ;

return 0;
}

Accepted!
