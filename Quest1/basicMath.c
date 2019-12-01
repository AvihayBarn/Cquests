
#include "myMath.h"
#include <stdio.h>

	float add(float x , float y){ return x+y; }
	float sub (float x , float y){ return x-y; }
	double mul(double x , int y){ return x*y; }

	double div (double x , int y) {
	if(y==0){ 
	printf("Eception! Devision By Zero/n");
	return 0;
	}
	else{
	return x/y;
	}
	}


	
