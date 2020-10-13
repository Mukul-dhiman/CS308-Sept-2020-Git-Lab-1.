	/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// use "gcc sqrt.c -o sqrt -lm && ./sqrt {enter any positive value}" to compl=ile and run the program

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG:Usage: sqrt input\n\n");
		exit(-1);
	}
	printf("welcome to my code\n");
	
	int input = atoi(argv[1]);
	bool negative=false;
	if(input<0){
		printf("DEBUG: Enter a postive value :\\\n");
		exit(0);
	}
	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	printf("DEBUG: Program Exiting\n");
	return(0);

} // end main
