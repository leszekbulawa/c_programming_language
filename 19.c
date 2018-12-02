#include <stdio.h>

int main(){
	int c, s;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			if (s != ' '){
				putchar(' ');
			}
		} else {
			putchar(c);
		}
		s = c;
	}
}
