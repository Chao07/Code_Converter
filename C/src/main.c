#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macroDefn.h"

//Convert Swift to Java Source files.

static const char *swiftDeclarations[] = {"print","var","func"};
static const char *javaDeclarations[] = {"System.out.println", "auto", "public"};

int main(int argc, char *argv[]){
	
	argc = 3;
	FILE *inputFile = fopen(argv[1], "r");
	FILE *outputFile = fopen(argv[2], "w");
	
	if(!inputFile){
		perror(ERR1);
		return EXIT_FAILURE;
	}
	char ch, buffer[BUFSIZE];
	char opStr[50];
	
	
	fprintf(outputFile, "public class %s {\n", nameCheck(argv[2], opStr));
	fprintf(outputFile, "\tpublic static void main(String[] args){\n");
	
	ch = fgetc(inputFile);
	while(!feof(inputFile)){
		fputc(ch, outputFile);
		ch = fgetc(inputFile);
	}
	
	/*while(fgets(buffer, BUFSIZE, inputFile)){
		if(strstr(buffer, "import") != NULL){
			}
	}*/
	
	//Unfinished attempt to replace basic Swift keywords with Java keywords/funcs.
	
	fputc('}', outputFile); 
	fputc('}', outputFile); 
	
	fclose(inputFile);
	fclose(outputFile);
}

char *nameCheck(char *filename, char *opStr){
	int i = 0;
	char str2[50];
	while(filename[i] != '.'){
		str2[i] = filename[i];
		i++;
	}
	opStr = str2; 
	return opStr;
}
