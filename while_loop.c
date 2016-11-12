#include <stdio.h>

int main(int argc, char **argv) {

	char c;
	c = ' ';
	printf("\ngetchar() with while loop...\n");

	while (c != 'y') {
		printf("\nEnter y or n: ");
		c = getchar();
		getchar();
	}
	printf("\nThat's all folks!\n");
}