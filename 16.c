#include <stdio.h>

int main(){
	int c;

	while ((c = getchar()) != EOF){
		putchar(c);
		printf("%d ", c != EOF);
	}
	printf("\n%d\n", c != EOF);
}
