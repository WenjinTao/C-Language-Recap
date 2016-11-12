#include <stdio.h>

#define MAXSTRLEN 200
#define FILENAME "test.txt"

void readlines() {
	FILE *fp = fopen(FILENAME, "r");

	char line[MAXSTRLEN];

	if (fp != 0) {
		while (fgets(line, sizeof(line), fp) != 0) {
			fputs(line, stdout);
		}
		printf("\n");
		fclose(fp);
	} else {
		printf("File %s cannot be opened!", FILENAME);
	}

}

void writelines() {
	FILE *fp;
	fp = fopen(FILENAME, "a");
	fputs("Hello world!\n", fp);
	fputs("Goodby Mars\n", fp);
	fclose(fp); 
}

void clearfile() {
	FILE *fp;
	fp = fopen(FILENAME, "w");
	fclose(fp);
}

void deletefile() {
	if (remove(FILENAME) == 0) {
		printf("%s file deleted.\n", FILENAME);
	}
	else {
		printf("Unable to delete the file: %s. \n", FILENAME);
	}
}

void main() {
	readlines();
	writelines();
}