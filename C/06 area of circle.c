#include <stdio.h>

#define PI 3.14
 
int main(){
    // WAP IN C THAT FIND AREA OF CIRCLE PI*RSquare
	
	 float radious, area;
	 printf("Enter radious: \n");
	 scanf("%F",&radious);
	 
	 // calculating
	 
	 area = PI * radious * radious;
	 printf("The area  of circle is %.2f",area);
	
	
	return 0;
}
