#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macroDefn.h"

//Convert Swift to Java Source files.

static const char *swiftDeclarations[] = {"print","var","func", "import"};

int main(int argc, char *argv[]){
	
	argc = 3;
	FILE *inputFile = fopen(argv[1], "r");
	FILE *outputFile = fopen(argv[2], "w");
	
	if(!inputFile){
		perror(ERR1);
		return EXIT_FAILURE;
	}
	char ch;
	char opStr[50];
	
	fprintf(outputFile, "public class %s {\n", nameCheck(argv[2], opStr));
	fprintf(outputFile, "\tpublic static void main(String[] args){\n");
	while(!feof(inputFile)){
		ch = fgetc(inputFile);
		fputc(ch, outputFile);
	}
	fputc('\t}', outputFile); 
	fputc('\n}', outputFile); 
	
	fclose(inputFile);
	fclose(outputFile);
}

char *nameCheck(char *filename, char *opStr){
	int i = 0;
	char str2[40];
	while(filename[i] != '.'){
		str2[i] = filename[i];
		i++;
	}
	opStr = str2; 
	return opStr;
}
