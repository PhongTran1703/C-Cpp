#include<stdio.h>

int main(){

	FILE *pFile = fopen("output.txt", "w");

	char text[] = "This is a testing message";

	if(pFile == NULL){
		printf("Error opring file\n");
		return 1;
	}

	fprintf(pFile, "%s", text);

	printf("File was written successfully\n");

	fclose(pFile);


	return 0;
}
