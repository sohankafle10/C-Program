#include <stdio.h>


int main (){
	
	// our first calculator in c
	
	
	// declaring variables
	
	int firstNumber, secondNumber, add, sub, mul, div, mod;
	
	// getting user input
	
	printf("Enter first number: \n");
	scanf("%d",&firstNumber);
	
	printf("Enter second number: \n");
	scanf("%d",&secondNumber);
	
	
	
	// calculating
	
	add = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
	
	 // printing
	 
	printf("The sum is %d\n",add);
	printf("The sub is %d\n",sub);
	printf("The mul is %d\n",mul);
	printf("The div is %d\n",div);
	printf("The mod is %d\n",mod);
	
	
	return 0;
}
