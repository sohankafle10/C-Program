#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *add;
};

struct node *start=NULL,*temp,*new1;
void create();
void display();

void main(){
	int ch;
	do{
		printf("===========menu==============\n");
		printf("1.create() \n 2.display\n3.Exit\n");
		printf("============================\n");
		printf("Enter the choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
			    exit(0);
			default:
				printf("Invalid choice\n ");
		}
	}while(ch!=4);
	
}
void create(){
	int n;
	char ch;
	printf("Enter the number\n");
	scanf("%d",&n);
	start=(struct node*)malloc(sizeof(struct node));
	start->data=n;
	start->add=NULL;
	temp=start;
	printf("Would you like to enter data continue(y/n)");
	scanf(" %c",&ch);
	while(ch=='y'|| ch=='Y'){
		printf("Enter the another number\n");
	    scanf("%d",&n);
	    new1=(struct node*)malloc(sizeof(struct node));
	    new1->data=n;
	    new1->add=NULL;
	    temp->add=new1;
	    temp=temp->add;
	    printf("Would you like to enter data continue(y/n)");
	    scanf(" %c",&ch);
	}
}



