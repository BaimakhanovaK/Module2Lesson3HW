#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main() 
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
start:
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("����������, �������� �� ������ ����� ����� ������ \n");

		int a = 0;

		printf("������� ����� �����: ");
		scanf("%d", &a);

		if (a % 2 == 0)
			printf("������ ����� �������� ������ \n");
		else
			printf("������ ����� �� �������� ������ \n");
	}
	else if (n == 2) {
		printf("�������� �������, ������� �������� ��������, �����  ����� � ������ ���� ��� ����. \n");

		int a = 0;

		printf("������� �����: ");
		scanf("%d", &a);

		if (a % 2 == 0 || a % 3 == 0)
			printf("������ ����� ������ ���� ��� ��� \n");
		else
			printf("������� ������� \n");
	}
	else if (n == 3) {
		printf("�������� �������, ������� �������� ��������, ����� ������ �� �����  � � � �������� \n");

		int a = 0, b = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		printf("������� ����� b: ");
		scanf("%d", &b);

		if (a % 2 == 1 && b % 2 == 1)
			printf("������ �� ����� �������� \n");
		else
			printf("������� ������� \n");
	}
	else if (n == 4) {
		printf("��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� X=0, Y=0, Z=1 \n");

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
		printf("5.	�������� ���������� ���������, ����������� ������� ����������� �������. a.	y=2tg x \n");

		float y = 0, x = 0;

		printf("������� �������� �: ");
		scanf("%f", &x);

		y = 2 * tan(x);

		printf("y=%f \n", y);
		}
	else if (n == 6) {
		printf("5.	�������� ���������� ���������, ����������� ������� ����������� �������.b.�=3/(x-1) \n");
		
		float x = 0.0, y = 0.0;

		printf("������� ����� �: ");
		scanf("%f", &x);

		y = (float) 3 / (x - 1);

		printf("y=%f \n", y);
	}
	else if (n == 7) {
		printf("6.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� �=1, �=0, �=1 \n");

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
		printf("7.	�������� ���������� ��������� ������������, ��� ����� � �������� �����������. \n");
		
		int a = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		if (a >= 100 && a <= 999)
			printf("����� �������� ����������� \n");
		else
		{
			printf("������� \n");
		}
	}
	else if (n == 9) {
		printf("8.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� �, � � � ������ 45. \n");

		int a = 0, b = 0, c = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		printf("������� ����� B: ");
		scanf("%d", &b);

		printf("������� ����� �: ");
		scanf("%d", &c);

		if (a < 45 || b < 45 || c < 45)
			printf("True \n");
		else
			printf("False \n");
	}
	else if (n == 10) {
		printf("9.	�������� �������, ������� �������� ��������, ����� ����� � �� ������ ���� � ������������ ����� \n");

		int a = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		if (a % 2==0 && a % 10 == 0)
			printf("True \n");
		else
			printf("False \n");
	}
	else if (n == 11) {
		printf("10.	�������� ���������� ���������, ������� ����������, ����������� �� ����� � ���������  �� -137 �� -51 ��� ��������� �� 123 �� 55. \n");

		int a = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		if ((a >= -137 && a <= -51) || (a <= 123 && a >= 55))
			printf(" ����� ����������� ��������� ��������� \n");
		else
			printf("�� ����������� \n");
	}
	goto start;
	}
	
	
