#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
