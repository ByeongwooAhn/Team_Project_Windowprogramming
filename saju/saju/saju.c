#include <stdio.h>
/*갑기 합 토 -> 갑자
  을경 합 금 -> 병자
  병신 합 수 -> 무자
  정임 합 목 -> 경자
  무계 합 화 -> 임자*/
void main(void)
{
	int year = 0, month = 0, day = 0, hour = 0, minute = 0;
	int y_first = 0, y_second = 0, m_first = 0, m_second = 0, d_first = 0, d_second = 0;
	int c = 0, n = 0, i = 0;
	char chun[21] = "갑을병정무기경신임계";
	char gan[25] = "자축인묘진사오미신유술해";

	printf("사주팔자\n\n");

	printf("태어난 해를 입력하시오. ex) 2000년\n");
	scanf("%d", &year);

	printf("\n태어난 달을 입력하시오. ex) 01월\n");
	scanf("%d", &month);

	printf("\n태어난 날을 입력하시오. ex) 01일\n");
	scanf("%d", &day);

	printf("\n태어난 시를 입력하시오.(24시 표기법 사용)\n");
	scanf("%d", &hour);

	printf("\n태어난 분을 입력하시오.\n");
	scanf("%d", &minute);

	printf("\n%d년 %d월 %d일 %d시 %d분\n", year, month, day, hour, minute);

	c = year / 100;
	n = year % 100;

	y_first = (year + 7) % 10;
	y_second = (year + 9) % 12;

	m_first = (2 * year + month + 3) % 10;
	m_second = (month + 1) % 12;

	if (month == 1 || month == 2)
	{
		year -= 1;
	}

	if (month == 1)
	{
		month = 13;
	}

	if (month == 2)
	{
		month = 14;
	}

	d_first = (4 * c + (c / 4) + 5 * n + (n / 4) + ((3 * month) / 5) + day + 7) % 10;
	d_second = (8 * c + (c / 4) + 5 * n + (n / 4) + 6 * month + ((3 * month) / 5) + day + 1) % 12;

	switch (y_first)
	{
	case 1:
		printf("%c%c", chun[0], chun[1]);
		break;
	case 2:
		printf("%c%c", chun[2], chun[3]);
		break;
	case 3:
		printf("%c%c", chun[4], chun[5]);
		break;
	case 4:
		printf("%c%c", chun[6], chun[7]);
		break;
	case 5:
		printf("%c%c", chun[8], chun[9]);
		break;
	case 6:
		printf("%c%c", chun[10], chun[11]);
		break;
	case 7:
		printf("%c%c", chun[12], chun[13]);
		break;
	case 8:
		printf("%c%c", chun[14], chun[15]);
		break;
	case 9:
		printf("%c%c", chun[16], chun[17]);
		break;
	case 10:
		printf("%c%c", chun[18], chun[19]);
		break;
	}

	switch (y_second)
	{
	case 1:
		printf("%c%c", gan[0], gan[1]);
		break;
	case 2:
		printf("%c%c", gan[2], gan[3]);
		break;
	case 3:
		printf("%c%c", gan[4], gan[5]);
		break;
	case 4:
		printf("%c%c", gan[6], gan[7]);
		break;
	case 5:
		printf("%c%c", gan[8], gan[9]);
		break;
	case 6:
		printf("%c%c", gan[10], gan[11]);
		break;
	case 7:
		printf("%c%c", gan[12], gan[13]);
		break;
	case 8:
		printf("%c%c", gan[14], gan[15]);
		break;
	case 9:
		printf("%c%c", gan[16], gan[17]);
		break;
	case 10:
		printf("%c%c", gan[18], gan[19]);
		break;
	case 11:
		printf("%c%c", gan[20], gan[21]);
		break;
	case 12:
		printf("%c%c", gan[22], gan[23]);
		break;
	}

	printf("년 ");

	switch (m_first)
	{
	case 1:
		printf("%c%c", chun[0], chun[1]);
		break;
	case 2:
		printf("%c%c", chun[2], chun[3]);
		break;
	case 3:
		printf("%c%c", chun[4], chun[5]);
		break;
	case 4:
		printf("%c%c", chun[6], chun[7]);
		break;
	case 5:
		printf("%c%c", chun[8], chun[9]);
		break;
	case 6:
		printf("%c%c", chun[10], chun[11]);
		break;
	case 7:
		printf("%c%c", chun[12], chun[13]);
		break;
	case 8:
		printf("%c%c", chun[14], chun[15]);
		break;
	case 9:
		printf("%c%c", chun[16], chun[17]);
		break;
	case 10:
		printf("%c%c", chun[18], chun[19]);
		break;
	}

	switch (m_second)
	{
	case 1:
		printf("%c%c", gan[0], gan[1]);
		break;
	case 2:
		printf("%c%c", gan[2], gan[3]);
		break;
	case 3:
		printf("%c%c", gan[4], gan[5]);
		break;
	case 4:
		printf("%c%c", gan[6], gan[7]);
		break;
	case 5:
		printf("%c%c", gan[8], gan[9]);
		break;
	case 6:
		printf("%c%c", gan[10], gan[11]);
		break;
	case 7:
		printf("%c%c", gan[12], gan[13]);
		break;
	case 8:
		printf("%c%c", gan[14], gan[15]);
		break;
	case 9:
		printf("%c%c", gan[16], gan[17]);
		break;
	case 10:
		printf("%c%c", gan[18], gan[19]);
		break;
	case 11:
		printf("%c%c", gan[20], gan[21]);
		break;
	case 12:
		printf("%c%c", gan[22], gan[23]);
		break;
	}

	printf("월 ");

	switch (d_first)
	{
	case 1:
		printf("%c%c", chun[0], chun[1]);
		break;
	case 2:
		printf("%c%c", chun[2], chun[3]);
		break;
	case 3:
		printf("%c%c", chun[4], chun[5]);
		break;
	case 4:
		printf("%c%c", chun[6], chun[7]);
		break;
	case 5:
		printf("%c%c", chun[8], chun[9]);
		break;
	case 6:
		printf("%c%c", chun[10], chun[11]);
		break;
	case 7:
		printf("%c%c", chun[12], chun[13]);
		break;
	case 8:
		printf("%c%c", chun[14], chun[15]);
		break;
	case 9:
		printf("%c%c", chun[16], chun[17]);
		break;
	case 10:
		printf("%c%c", chun[18], chun[19]);
		break;
	}

	switch (d_second)
	{
	case 1:
		printf("%c%c", gan[0], gan[1]);
		break;
	case 2:
		printf("%c%c", gan[2], gan[3]);
		break;
	case 3:
		printf("%c%c", gan[4], gan[5]);
		break;
	case 4:
		printf("%c%c", gan[6], gan[7]);
		break;
	case 5:
		printf("%c%c", gan[8], gan[9]);
		break;
	case 6:
		printf("%c%c", gan[10], gan[11]);
		break;
	case 7:
		printf("%c%c", gan[12], gan[13]);
		break;
	case 8:
		printf("%c%c", gan[14], gan[15]);
		break;
	case 9:
		printf("%c%c", gan[16], gan[17]);
		break;
	case 10:
		printf("%c%c", gan[18], gan[19]);
		break;
	case 11:
		printf("%c%c", gan[20], gan[21]);
		break;
	case 12:
		printf("%c%c", gan[22], gan[23]);
		break;
	}

	printf("일 ");

	if (d_first == 1 || d_first == 6)
	{
		if ((hour == 23 && 30 <= minute <= 59) || (hour == 24 && 0 <= minute <= 59) || (hour == 0 && 0 <= minute <= 59) || (hour == 1 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[0], gan[1]);
		}

		if ((hour == 1 && 30 <= minute <= 59) || (hour == 2 && 0 <= minute <= 59) || (hour == 3 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[2], gan[3]);
		}

		if ((hour == 3 && 30 <= minute <= 59) || (hour == 4 && 0 <= minute <= 59) || (hour == 5 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[4], gan[5]);
		}

		if ((hour == 5 && 30 <= minute <= 59) || (hour == 6 && 0 <= minute <= 59) || (hour == 7 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[6], gan[7]);
		}

		if ((hour == 7 && 30 <= minute <= 59) || (hour == 8 && 0 <= minute <= 59) || (hour == 9 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[8], gan[9]);
		}

		if ((hour == 9 && 30 <= minute <= 59) || (hour == 10 && 0 <= minute <= 59) || (hour == 11 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[10], gan[11]);
		}

		if ((hour == 11 && 30 <= minute <= 59) || (hour == 12 && 0 <= minute <= 59) || (hour == 13 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[12], gan[13]);
		}

		if ((hour == 13 && 30 <= minute <= 59) || (hour == 14 && 0 <= minute <= 59) || (hour == 15 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[14], gan[15]);
		}

		if ((hour == 15 && 30 <= minute <= 59) || (hour == 16 && 0 <= minute <= 59) || (hour == 17 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[16], gan[17]);
		}

		if ((hour == 17 && 30 <= minute <= 59) || (hour == 18 && 0 <= minute <= 59) || (hour == 19 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[18], gan[19]);
		}

		if ((hour == 19 && 30 <= minute <= 59) || (hour == 20 && 0 <= minute <= 59) || (hour == 21 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[20], gan[21]);
		}

		if ((hour == 21 && 30 <= minute <= 59) || (hour == 22 && 0 <= minute <= 59) || (hour == 23 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[22], gan[23]);
		}
	}

	if (d_first == 2 || d_first == 7)
	{
		if ((hour == 23 && 30 <= minute <= 59) || (hour == 24 && 0 <= minute <= 59) || (hour == 0 && 0 <= minute <= 59) || (hour == 1 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[0], gan[1]);
		}

		if ((hour == 1 && 30 <= minute <= 59) || (hour == 2 && 0 <= minute <= 59) || (hour == 3 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[2], gan[3]);
		}

		if ((hour == 3 && 30 <= minute <= 59) || (hour == 4 && 0 <= minute <= 59) || (hour == 5 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[4], gan[5]);
		}

		if ((hour == 5 && 30 <= minute <= 59) || (hour == 6 && 0 <= minute <= 59) || (hour == 7 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[6], gan[7]);
		}

		if ((hour == 7 && 30 <= minute <= 59) || (hour == 8 && 0 <= minute <= 59) || (hour == 9 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[8], gan[9]);
		}

		if ((hour == 9 && 30 <= minute <= 59) || (hour == 10 && 0 <= minute <= 59) || (hour == 11 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[10], gan[11]);
		}

		if ((hour == 11 && 30 <= minute <= 59) || (hour == 12 && 0 <= minute <= 59) || (hour == 13 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[12], gan[13]);
		}

		if ((hour == 13 && 30 <= minute <= 59) || (hour == 14 && 0 <= minute <= 59) || (hour == 15 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[14], gan[15]);
		}

		if ((hour == 15 && 30 <= minute <= 59) || (hour == 16 && 0 <= minute <= 59) || (hour == 17 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[16], gan[17]);
		}

		if ((hour == 17 && 30 <= minute <= 59) || (hour == 18 && 0 <= minute <= 59) || (hour == 19 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[18], gan[19]);
		}

		if ((hour == 19 && 30 <= minute <= 59) || (hour == 20 && 0 <= minute <= 59) || (hour == 21 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[20], gan[21]);
		}

		if ((hour == 21 && 30 <= minute <= 59) || (hour == 22 && 0 <= minute <= 59) || (hour == 23 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[22], gan[23]);
		}
	}

	if (d_first == 3 || d_first == 8)
	{
		if ((hour == 23 && 30 <= minute <= 59) || (hour == 24 && 0 <= minute <= 59) || (hour == 0 && 0 <= minute <= 59) || (hour == 1 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[0], gan[1]);
		}

		if ((hour == 1 && 30 <= minute <= 59) || (hour == 2 && 0 <= minute <= 59) || (hour == 3 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[2], gan[3]);
		}

		if ((hour == 3 && 30 <= minute <= 59) || (hour == 4 && 0 <= minute <= 59) || (hour == 5 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[4], gan[5]);
		}

		if ((hour == 5 && 30 <= minute <= 59) || (hour == 6 && 0 <= minute <= 59) || (hour == 7 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[6], gan[7]);
		}

		if ((hour == 7 && 30 <= minute <= 59) || (hour == 8 && 0 <= minute <= 59) || (hour == 9 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[8], gan[9]);
		}

		if ((hour == 9 && 30 <= minute <= 59) || (hour == 10 && 0 <= minute <= 59) || (hour == 11 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[10], gan[11]);
		}

		if ((hour == 11 && 30 <= minute <= 59) || (hour == 12 && 0 <= minute <= 59) || (hour == 13 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[12], gan[13]);
		}

		if ((hour == 13 && 30 <= minute <= 59) || (hour == 14 && 0 <= minute <= 59) || (hour == 15 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[14], gan[15]);
		}

		if ((hour == 15 && 30 <= minute <= 59) || (hour == 16 && 0 <= minute <= 59) || (hour == 17 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[16], gan[17]);
		}

		if ((hour == 17 && 30 <= minute <= 59) || (hour == 18 && 0 <= minute <= 59) || (hour == 19 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[18], gan[19]);
		}

		if ((hour == 19 && 30 <= minute <= 59) || (hour == 20 && 0 <= minute <= 59) || (hour == 21 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[20], gan[21]);
		}

		if ((hour == 21 && 30 <= minute <= 59) || (hour == 22 && 0 <= minute <= 59) || (hour == 23 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[22], gan[23]);
		}
	}

	if (d_first == 4 || d_first == 9)
	{
		if ((hour == 23 && 30 <= minute <= 59) || (hour == 24 && 0 <= minute <= 59) || (hour == 0 && 0 <= minute <= 59) || (hour == 1 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[0], gan[1]);
		}

		if ((hour == 1 && 30 <= minute <= 59) || (hour == 2 && 0 <= minute <= 59) || (hour == 3 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[2], gan[3]);
		}

		if ((hour == 3 && 30 <= minute <= 59) || (hour == 4 && 0 <= minute <= 59) || (hour == 5 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[4], gan[5]);
		}

		if ((hour == 5 && 30 <= minute <= 59) || (hour == 6 && 0 <= minute <= 59) || (hour == 7 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[6], gan[7]);
		}

		if ((hour == 7 && 30 <= minute <= 59) || (hour == 8 && 0 <= minute <= 59) || (hour == 9 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[8], gan[9]);
		}

		if ((hour == 9 && 30 <= minute <= 59) || (hour == 10 && 0 <= minute <= 59) || (hour == 11 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[10], gan[11]);
		}

		if ((hour == 11 && 30 <= minute <= 59) || (hour == 12 && 0 <= minute <= 59) || (hour == 13 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[12], gan[13]);
		}

		if ((hour == 13 && 30 <= minute <= 59) || (hour == 14 && 0 <= minute <= 59) || (hour == 15 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[14], gan[15]);
		}

		if ((hour == 15 && 30 <= minute <= 59) || (hour == 16 && 0 <= minute <= 59) || (hour == 17 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[16], gan[17]);
		}

		if ((hour == 17 && 30 <= minute <= 59) || (hour == 18 && 0 <= minute <= 59) || (hour == 19 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[18], gan[19]);
		}

		if ((hour == 19 && 30 <= minute <= 59) || (hour == 20 && 0 <= minute <= 59) || (hour == 21 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[20], gan[21]);
		}

		if ((hour == 21 && 30 <= minute <= 59) || (hour == 22 && 0 <= minute <= 59) || (hour == 23 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[22], gan[23]);
		}
	}

	if (d_first == 5 || d_first == 10)
	{
		if ((hour == 23 && 30 <= minute <= 59) || (hour == 24 && 0 <= minute <= 59) || (hour == 0 && 0 <= minute <= 59) || (hour == 1 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[0], gan[1]);
		}

		if ((hour == 1 && 30 <= minute <= 59) || (hour == 2 && 0 <= minute <= 59) || (hour == 3 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[2], gan[3]);
		}

		if ((hour == 3 && 30 <= minute <= 59) || (hour == 4 && 0 <= minute <= 59) || (hour == 5 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c시", gan[4], gan[5]);
		}

		if ((hour == 5 && 30 <= minute <= 59) || (hour == 6 && 0 <= minute <= 59) || (hour == 7 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c시", gan[6], gan[7]);
		}

		if ((hour == 7 && 30 <= minute <= 59) || (hour == 8 && 0 <= minute <= 59) || (hour == 9 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c시", gan[8], gan[9]);
		}

		if ((hour == 9 && 30 <= minute <= 59) || (hour == 10 && 0 <= minute <= 59) || (hour == 11 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c시", gan[10], gan[11]);
		}

		if ((hour == 11 && 30 <= minute <= 59) || (hour == 12 && 0 <= minute <= 59) || (hour == 13 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c시", gan[12], gan[13]);
		}

		if ((hour == 13 && 30 <= minute <= 59) || (hour == 14 && 0 <= minute <= 59) || (hour == 15 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c시", gan[14], gan[15]);
		}

		if ((hour == 15 && 30 <= minute <= 59) || (hour == 16 && 0 <= minute <= 59) || (hour == 17 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c시", gan[16], gan[17]);
		}

		if ((hour == 17 && 30 <= minute <= 59) || (hour == 18 && 0 <= minute <= 59) || (hour == 19 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c시", gan[18], gan[19]);
		}

		if ((hour == 19 && 30 <= minute <= 59) || (hour == 20 && 0 <= minute <= 59) || (hour == 21 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c시", gan[20], gan[21]);
		}

		if ((hour == 21 && 30 <= minute <= 59) || (hour == 22 && 0 <= minute <= 59) || (hour == 23 && 0 <= minute <= 29))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c시", gan[22], gan[23]);
		}
	}
}