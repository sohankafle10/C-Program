#include<stdio.h>
#include<stdlib.h>
struct User{
	char username[50];
	int pin;

};
void login(struct User user);
void registerAcc(struct User user);
int main(){
	struct User tuser;
	 
	int choice;
	printf("MAIN MENU: \n\n");
	printf("1. login\n");
	printf("2. Register\n");
	printf("3. Exit\n");
	printf("Enter a choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("username: ");
			scanf("%s",tuser.username);
			printf("4 digit pin: ");
			scanf("%d",&tuser.pin);
			login(tuser);
			break;
			
			case 2:
			printf(" Enter a username: ");
			scanf("%s",tuser.username);
			printf("Enter a 4 digit pin: ");
			scanf("%d",&tuser.pin);
			registerAcc(tuser);
			break;
			
			case 3:
			 exit(1);
			default:
				printf("invalid input");
	}
	
	
	

}


void registerAcc(struct User user){
FILE *file = fopen("users_temp.txt","a");
if (file  == NULL){
	printf("\n\nError opening file.\n");
	return;
}
fprintf(file,"%s %d\n",user.username, user.pin);
printf("user successfully registered.\n\n");
fclose(file);
}
void login(struct User user){
	char current_username[50];
	int current_pin;
	FILE *file = fopen("users_temp.txt","r");
	printf("User:\n\n");
	if (file !=NULL){
		while((fscanf(file,"%s %d",current_username,&current_pin) !=EOF)){
		
		if(strcmp(user.pin == current_pin)){
			printf("Logged in...");
		}
	}
}

else{
	printf("User not found");
	}
	fclose(file);
}
void mainMenu(char bill_username[]){
	int choice;
	printf("MAIN MENU: \n\n");
	printf("1. login\n");
	printf("2. Register\n");
	printf("3. Exit\n");
	printf("Enter a choice: ");
	scanf("%d",&choice);
}
	

