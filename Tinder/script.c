# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/* 	
	This is an ultra simple script written to take HTML source
	code as the input and slightly modify it.  When using
	tinder it can be frustrating to see those blurred images
	of profiles that have liked you.  Wouldn't it be nice to
	see who likes you without paying for tinder gold?  This
	simple script does this for you.  The images can come out
	quite pixelated but you can fairly easily recognize
	a person's features and even their face if the image is 
	close enough!
*/

int main() {
	char arr[300];
	FILE * input;
	FILE * output;


	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	while (fgets (arr, 300, input) != NULL) {
		char *p = strstr(arr, "Blur(12px)");
		if (p != NULL) {
			*(p + 5) = '0';
			*(p + 6) = ' ';
		}
		fprintf(output, "%s", arr);
	}

	fclose(input);
	fclose(output);

	return 0;
}