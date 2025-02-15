#include<stdio.h>
int main()
{
printf("------- Main Menu------\n\n");
printf("1.Add Books\n");
printf("2.Display Book information\n");
printf("3.Search Books(Books  status)\n");
printf("4.Exit\n\n");


int a1;
printf("Enter :");
scanf("%d",&a1);
printf("\n\n");
if(a1==1)
{
printf("You can add book information\n\n");
printf("Choose the category:\n\n");
printf("1.Computer\n");
printf("2.Mathematics\n");
printf("3.Electronics\n\n");


int a2;
printf("Choose a Category :\n\n");
scanf("%d",&a2);
printf("\n\n");
if(a2==1)
{
printf("You have choosed computer category\n\n");
printf("1.Introduction to c\n");
printf("2.Introduction to java\n");
printf("3.Introduction to HTML/CSS\n\n");

int a3;
printf("Choose a book :");
scanf("%d",&a3);
printf("\n\n");

if(a3==1)
{
printf("You have choosed Introduction to c\n\n");
char book_namea[50];
char author_namea[50];
int pagea;
int pricea;

printf("Book Name :");
scanf("%s",&book_namea);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_namea);
printf("\n\n");

printf("Pages:");
scanf("%d",&pagea);
printf("\n\n");

printf("Price :");
scanf("%d",&pricea);
printf("\n\n");
}
else if(a3==2)
{
printf("You have choosed Introduction to java\n\n");
char book_nameb[50];
char author_nameb[50];
int pageb;
int priceb;

printf("Book Name :");
scanf("%s",&book_nameb);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_nameb);
printf("\n\n");

printf("Pages:");
scanf("%d",&pageb);
printf("\n\n");

printf("Price :");
scanf("%d",&priceb);
printf("\n\n");
}
else if(a3==3)
{
printf("You have choosed Introduction to HTML/CSS\n\n");
char book_namec[50];
char author_namec[50];
int pagec;
int pricec;

printf("Book Name :");
scanf("%s",&book_namec);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_namec);
printf("\n\n");

printf("Pages:");
scanf("%d",&pagec);
printf("\n\n");

printf("Price :");
scanf("%d",&pricec);
printf("\n\n");
}

}
else if(a2==2)
{

printf("You have choosed Mathematics category\n\n");
printf("1.Basic Mathematics\n");
printf("2.Intermediate Mathematcis\n");
printf("3.Advance Mathematics\n\n");

int a4;
printf("Choose a book :");
scanf("%d",&a4);
printf("\n\n");

if(a4==1)
{
printf("You have choosed Basic Mathematics\n\n");
char book_named[50];
char author_named[50];
int paged;
int priced;

printf("Book Name :");
scanf("%s",&book_named);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_named);
printf("\n\n");

printf("Pages:");
scanf("%d",&paged);
printf("\n\n");

printf("Price :");
scanf("%d",&priced);
printf("\n\n");
}
else if(a4==2)
{
printf("You have choosed Intemediate Mathematics\n\n");
char book_namee[50];
char author_namee[50];
int pagee;
int pricee;

printf("Book Name :");
scanf("%s",&book_namee);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_namee);
printf("\n\n");

printf("Pages:");
scanf("%d",&pagee);
printf("\n\n");

printf("Price :");
scanf("%d",&pricee);
printf("\n\n");
}
else if(a4==3)
{
printf("You have choosed Advanced Mathematics\n\n");
char book_namef[50];
char author_namef[50];
int pagef;
int pricef;

printf("Book Name :");
scanf("%s",&book_namef);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_namef);
printf("\n\n");

printf("Pages:");
scanf("%d",&pagef);
printf("\n\n");

printf("Price :");
scanf("%d",&pricef);
printf("\n\n");
}
}
else if(a2==3)
{
printf("You have choosed Electronics category\n\n");
printf("1.Digital Logic\n");
printf("2.The art of electronics\n");
printf("3.Introduction to electronics\n\n");

int a5;
printf("Choose a book :");
scanf("%d",&a5);
printf("\n\n");

if(a5==1)
{
printf("You have choosed Digital Logic\n\n");
char book_nameg[50];
char author_nameg[50];
int pageg;
int priceg;

printf("Book Name :");
scanf("%s",&book_nameg);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_nameg);
printf("\n\n");

printf("Pages:");
scanf("%d",&pageg);
printf("\n\n");

printf("Price :");
scanf("%d",&priceg);
printf("\n\n");
}
else if(a5==2)
{
printf("You have choosed The art of electronics\n\n");
char book_nameh[50];
char author_nameh[50];
int pageh;
int priceh;

printf("Book Name :");
scanf("%s",&book_nameh);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_nameh);
printf("\n\n");

printf("Pages:");
scanf("%d",&pageh);
printf("\n\n");

printf("Price :");
scanf("%d",&priceh);
printf("\n\n");
}
else if(a5==3)
{
printf("You have choosed Introduction to electronics\n\n");
char book_namei[50];
char author_namei[50];
int pagei;
int pricei;

printf("Book Name :");
scanf("%s",&book_namei);
printf("\n\n");

printf("Author Name:");
scanf("%s",&author_namei);
printf("\n\n");

printf("Pages:");
scanf("%d",&pagei);
printf("\n\n");

printf("Price :");
scanf("%d",&pricei);
printf("\n\n");
}
}
}
else if(a1==3)
{
printf("You can search the book(Books Status)\n\n");

printf("Press the code:123 for Introduction to c\n");
printf("Press the code:456 for Introduction to java\n");
printf("Press the code:789 for Introduction to HTML/CSS\n");

printf("Press the code:101 for Basic Mathematics\n");
printf("Press the code:112 for Intermediate Mathematics\n");
printf("Press the code:131 for Advance Mathematics\n");

printf("Press the code:141 for Digital Logic\n");
printf("Press the code:151 for The art of electronics\n");
printf("Press the code:161 for Introduction to electronics\n\n");

int a6;
printf("Enter the book to search(USE THE CODE):\n");
scanf("%d",&a6);
printf("\n");

switch(a6)
{
case 123:
printf("Book Name:Introduction to c\n\n");
printf("Book Status : 2 copies left");
break;
case 456:
printf("Book Name:Introduction to java\n\n");
printf("Book Status : 15 copies left");
break;
case 789:
printf("Book Name:Introduction to HTML/CSS\n\n");
printf("Book Status : 10 copies left");
break;

case 101:
printf("Book Name:Basic Mathematics\n\n");
printf("Book Status : 7 copies left");
break;
case 112:
printf("Book Name:Intermediate Mathematics\n\n");
printf("Book Status : 12 copies left");
break;
case 131:
printf("Book Name:Advance Mathematics\n\n");
printf("Book Status : 4 copies left");
break;

case 141:
printf("Book Name:Digital Logic\n\n");
printf("Book Status : 0 copies left");
break;
case 151:
printf("Book Name:The art of electronics\n\n");
printf("Book Status : 23 copies left");
break;
case 161:
printf("Book Name:Introduction to electronics\n\n");
printf("Book Status : 1 copies left");
break;


}
}
else if(a1==4)
{
printf("Libary is closed\n\n");
printf("Have a nice day");
}
return 0;
}

