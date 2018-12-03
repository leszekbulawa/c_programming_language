#include <stdio.h>

#define IN 1 /* inside word */
#define OUT 0 /* outside word */

int main() {
	int c, p, state;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t'){
			if (p != ' ' || p != '\t'){
				putchar('\n');
			}
		}
		else {
			putchar(c);
		}
		p = c;
	}
}
