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
	printf("이름 : 박지원\n");
	printf("나이 : 22살\n");
	printf("주소 : 광주 서구 풍암중앙로68");

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

	printf("첫 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("두 번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);

	sum = a + b;
	printf("두 수의 합은 %d입니다.", sum);

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

	printf("여행은 몇 박인가요? : ");
	scanf_s("%d", &travel);

	printf("항공권 가격 : ");
	scanf_s("%d", &flight);

	printf("호텔 1박 가격 : ");
	scanf_s("%d", &hotel);

	printf("하루에 필요한 용돈 : ");
	scanf_s("%d", &cost_a_day);

	total = flight + travel * (cost_a_day + hotel);
	printf("총 여행 비용 : %d", total);

	return 0;
}