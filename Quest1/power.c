
#include "myMath.h"
#include <stdio.h>
#define e 2.71828183
	double Pow(double x, int y){
	int i;
	double p=1;
        for(i=0;i<y;i++){
        p=p*x;
	}
	return p;
	}
	double Exp(int x){
	return Pow(e,x);
	}

	

