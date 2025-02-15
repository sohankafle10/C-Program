#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STACK_SIZE 10
struct demoofstack
{
	int stack[STACK_SIZE];
	
}
obj;
void push();
int pop();
void display();
  
  int top=-1;
  int item;
  int i;
  int main()
  {
  	int choice;
  	for(;;)
  	{
  		printf("\n 1 push");
  		printf("\n 2. pop");
  		printf("\n. display all");
  		printf("\4. exit");
  		printf("\n enter your choice");
  		scanf("%d",&choice);
  		switch(choice)
  		{
  			case 1:
  				push();
  				break;
  		    case 2:
  		    	printf("\n item is %d",pop());
  		    	break;
  		    	case 3:
  		    		display();
  		    		break;
  		    		default:
  		    		exit(0);
  		    	}
  		    	
  		}
  	}
  	void push()
	  {
  		if (top==STACK_SIZE-1)
  		{
  			printf("\n stack is overflow");
  			
		  }
		  else{
		  	printf("\n Enter the item");
		  	scanf("%d", &item); ++top; obj.stack[top]=item;
}
}
int pop()
{
if(top<0)
{ printf(" stack is empty "); return -1;
}
else
{
item=obj.stack[top]; top--; return item;
}
}
void display()
{
if(top<0)
{
printf("\n stack is empty ");
}
else
{
printf("\n stack items are ");
for(i=top;i>=0;i--)
{
printf("\n %d",obj.stack[i]);
}
}
}
	
