//Змеевский Михаил, домашнее задание 2

#include <stdio.h> //подключаем стандартную библиотеку ввода-вывода

// 1. Перевести десятичное число в двоичное
void decToBin(int n)
{
	if (n < 0)
	{
		printf("-");
		decToBin(-n);
	}
	else if (n < 2)
	{
		printf("%i", n);
		return;
	}
	else {
		decToBin(n / 2);
		int res = n % 2;
		printf("%i", res);
	}
}

int main(int argc, char *argv[])
{
	int n;
	printf("Enter a number: ");
	scanf("%i", &n);
	decToBin(n);
	getch();
	return 0;
}