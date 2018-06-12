#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main() 
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
start:
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("Определить, является ли данное целое число четным \n");

		int a = 0;

		printf("Введите целое число: ");
		scanf("%d", &a);

		if (a % 2 == 0)
			printf("Данное число является чётным \n");
		else
			printf("Данное число не является чётным \n");
	}
	else if (n == 2) {
		printf("Записать условие, которое является истинным, когда  целое А кратно двум или трем. \n");

		int a = 0;

		printf("Введите число: ");
		scanf("%d", &a);

		if (a % 2 == 0 || a % 3 == 0)
			printf("Данное число кратно двум или трём \n");
		else
			printf("Условие неверно \n");
	}
	else if (n == 3) {
		printf("Записать условие, которое является истинным, когда каждое из чисел  А и В нечетное \n");

		int a = 0, b = 0;

		printf("Введите число а: ");
		scanf("%d", &a);

		printf("Введите число b: ");
		scanf("%d", &b);

		if (a % 2 == 1 && b % 2 == 1)
			printf("Каждое из чисел нечётное \n");
		else
			printf("Условие неверно \n");
	}
	else if (n == 4) {
		printf("Вычислить значение логических выражений при следующих значениях логических переменных X=0, Y=0, Z=1 \n");

		printf("a.	X<Y>Z \n");

		int x = 0, y = 0, z = 1;

		if (x<y && y>z)
			printf("True \n");
		else
			printf("False\n");
		
		printf("b.	X>Y \n");

		if (x > y)
			printf("True \n");
		else
			printf("False \n");

		printf("c.	(X>Z)<Y \n");

		if (x > z && (x > z) < y)
			printf("True \n");
		else
			printf("False \n");
		}
	else if (n == 5) {
		printf("5.	Записать логическое выражение, описывающее область определения функции. a.	y=2tg x \n");

		float y = 0, x = 0;

		printf("Введите значение х: ");
		scanf("%f", &x);

		y = 2 * tan(x);

		printf("y=%f \n", y);
		}
	else if (n == 6) {
		printf("5.	Записать логическое выражение, описывающее область определения функции.b.у=3/(x-1) \n");
		
		float x = 0.0, y = 0.0;

		printf("Введите число х: ");
		scanf("%f", &x);

		y = (float) 3 / (x - 1);

		printf("y=%f \n", y);
	}
	else if (n == 7) {
		printf("6.	Вычислить значения логических выражений при следующих значениях логических переменных А=1, В=0, С=1 \n");

		printf("a.	A<(A>B)<C \n");

		int a = 1, b = 0, c = 1;

		if (a < (a > b) && (a > b) < c)
			printf("True \n");
		else
			printf("False \n");

		printf("b.	A<C>(B<C) \n");
		
		if (a<c && c>(b < c))
			printf("True \n");
		else
			printf("False \n");

		printf("c.	(A<B>C)<A \n");

		if ((a < b) && (b > c) < a)
			printf("True \n");
		else
			printf("False \n");
	}
	else if (n == 8) {
		printf("7.	Записать логическое выражение определяющее, что число А является трехзначным. \n");
		
		int a = 0;

		printf("Введите число А: ");
		scanf("%d", &a);

		if (a >= 100 && a <= 999)
			printf("Число является трехзначным \n");
		else
		{
			printf("Неверно \n");
		}
	}
	else if (n == 9) {
		printf("8.	Записать условие, которое является истинным, когда только одно из чисел А, В и С меньше 45. \n");

		int a = 0, b = 0, c = 0;

		printf("Введите число А: ");
		scanf("%d", &a);

		printf("Введите число B: ");
		scanf("%d", &b);

		printf("Введите число С: ");
		scanf("%d", &c);

		if (a < 45 || b < 45 || c < 45)
			printf("True \n");
		else
			printf("False \n");
	}
	else if (n == 10) {
		printf("9.	Записать условие, которое является истинным, когда целое А не кратно трем и оканчивается нулем \n");

		int a = 0;

		printf("Введите число А: ");
		scanf("%d", &a);

		if (a % 2==0 && a % 10 == 0)
			printf("True \n");
		else
			printf("False \n");
	}
	else if (n == 11) {
		printf("10.	Записать логическое выражение, которое определяет, принадлежит ли число А интервалу  от -137 до -51 или интервалу от 123 до 55. \n");

		int a = 0;

		printf("Введите число А: ");
		scanf("%d", &a);

		if ((a >= -137 && a <= -51) || (a <= 123 && a >= 55))
			printf(" Число принадлежит заданному интервалу \n");
		else
			printf("Не принадлежит \n");
	}
	goto start;
	}
	
	
