/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// use "gcc sqrt.c -o sqrt -lm && ./sqrt {enter any positive value}" to compl=ile and run the program

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		exit(-1);
	}

	
	int input = atoi(argv[1]);
	if(input<0){
		printf("NEGSUPPORT: Enter a postive value :\\\n");
		exit(0);
	}
	printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT: Program Exiting\n");
	return(0);

} // end main
