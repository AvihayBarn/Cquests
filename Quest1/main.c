#include "myMath.h"
#include <stdio.h>

	int main(){
         
	 printf("Enter a real number/n");
	 double x;
	 scanf("%f",&x);
         float func1=sub(add(Exp(x),Pow(x,3)),2);
	 float func2=add(mul(x,3),mul(Pow(x,2),2));
	 float func3=div(mul(Pow(x,3),4),sub(5,mul(x,2)));
	 printf("The is the value of %0.4f in the following functuions is:",x);
         printf("e^x+x^3-2 = %0.4f",func1);
	 printf("3x+2x^2 = %0.4f",func2);
         printf("(4x^3)/(5-2x) = %0.4f",func3);
	
	 
	 return 0;
	 }



