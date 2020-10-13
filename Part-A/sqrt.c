/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// use "gcc sqrt.c -o sqrt -lm && ./sqrt {enter any positive value}" to compl=ile and run the program

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	printf("welcome to my code\n");
	
	int input = atoi(argv[1]);
	bool negative=false;
	if(input<0){
		negative=true;
		input=input*(-1);
	}
	printf("Sqrt of %d is %f",input,sqrt(input));
	if(negative){
		printf("i\n");
	}
	printf("Program Exiting\n");
	return(0);

} // end main
