/*
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("Hello World!");

	return 0;
}


#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("�̸� : ������\n");
	printf("���� : 22��\n");
	printf("�ּ� : ���� ���� ǳ���߾ӷ�68");

	return 0;
}


#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, k;

	for (i = 3; i < 4; i++)
	{
		for (k = 1; k <= 10; k++)
		{
			printf("%d X %d = %d\n", i, k, i * k);
		}
	}

	return 0;
}


#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	sum = a + b;
	printf("�� ���� ���� %d�Դϴ�.", sum);

	return 0;
}
*/

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int travel;
	int flight;
	int hotel;
	int cost_a_day;
	int total;

	printf("������ �� ���ΰ���? : ");
	scanf_s("%d", &travel);

	printf("�װ��� ���� : ");
	scanf_s("%d", &flight);

	printf("ȣ�� 1�� ���� : ");
	scanf_s("%d", &hotel);

	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf_s("%d", &cost_a_day);

	total = flight + travel * (cost_a_day + hotel);
	printf("�� ���� ��� : %d", total);

	return 0;
}