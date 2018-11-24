#include <stdio.h>

int main(){
	float fahr, cels;
	int lower, upper, step;
	
	lower = -100;
	upper = 100;
	step = 20;

	printf(" cels | fahr\n");
	printf(" -----------\n");
	
	cels = lower;
	while(cels <= upper){
		fahr = cels * (9.0 / 5.0) + 32;
		printf(" %4.0f | %4.0f\n", cels, fahr);
		cels += step;
	}
}
