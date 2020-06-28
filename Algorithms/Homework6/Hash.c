//1. Реализовать простейшую хэш-функцию. На вход функции подается строка, на выходе сумма кодов символов.

#include <stdio.h>

#define FILE_NAME "file.txt"

int StringHash(char *ch, int length);

void main()
{
	FILE *input_file;
	char buf[4096];
	input_file = fopen(FILE_NAME, "rt");
	if (input_file == NULL)
	{
		printf("\nError opening file!");
		exit(1);
	}
	fgets(buf, sizeof(buf), input_file);
	int length = strlen(buf);
	
	printf("%d", StringHash(buf, length));
	scanf(" ");
}

// функция вычисления хэша от строки
int StringHash(char *ch, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += ch[i];
	}
}