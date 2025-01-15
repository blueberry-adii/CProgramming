#include<stdio.h>

struct tagname
{
    member1;
    member2;
    member3;
    member4;
} strvar1, strvar2, strvar3;

//example

struct book
{
    int bookid;
    float price;
    char name[20];
} b1, b2, b3;

//........................................

struct tagname strvar4, strvar5;

//example

struct book b1, b2;

//........................................

typedef struct
{
    member1;
    member2;
    member3
} typename;

typename strvar6, strvar7, strvar8;

//example

typedef struct
{
    int bookid;
    float price;
    char name[20];
} book;

book b1,b2,b3;


