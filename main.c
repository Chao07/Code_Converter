#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semanticsDefn.h"

//Convert Swift to Java Source files.

int main(int argc, char *argv[]){
	
	if(argc > 2){
		printf(ERR1);
		return EXIT_FAILURE; 
	}
	
	FILE *selectedFile = fopen(argv[0], "rw");
	
	if(!selectedFile){
		printf(ERR2);
		return EXIT_FAILURE;
	}
	
	extensionChecker(argv[0]);
	
	while(!feof(selectedFile)){
		//Not Complete.
	}
}
