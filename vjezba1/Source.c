#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define error_opening_file -1 
#define BUFFER_SIZE 1024

typedef struct
{
	char ime[25];
	char prezime[25];
	float bodovi;
}student;

int count_rows(char*fileName);
int OpenFile(char*fileName)
{
	FILE*fp = NULL;
	fp = fopen(fileName, "r");
	if (fp == NULL){
	printf("Pogreska pri otvaranju.");
	return error_opening_file;
	}
		fclose(fp);
}
int count_rows(char*fileName)
{
	FILE*fp = fopen(fileName, "r");
	if (fp == NULL) {
		printf("error");
		return error_opening_file;
	}
	int buffer[BUFFER_SIZE];
	int count = 0;
	while (!feof(fp))
	{
		fgets(buffer, BUFFER_SIZE, fp);
		++count;
	}
	fclose(fp);
	return count;
}

int main()
{

}
