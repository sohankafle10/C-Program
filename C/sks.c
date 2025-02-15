#include<stdio.h>


struct Person{
	char name[50];
	int age;
};

struct Person persons[5];
int main(){
	int i;
	for(i=0;i<3;i++){
		printf("Enter the name of person:\n ");
		scanf("%s",persons[i].name);
		printf("Enter the age of a persons:\n ");
		scanf("%d",&persons[i].age);
		
	}
	for(i=0;i<3;i++){
		printf("the name is: %s\n ",persons[i].name);
		printf("the age is: %d",persons[i].age);
	}
}
