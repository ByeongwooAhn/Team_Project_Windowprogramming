#include <stdio.h>
/*���� �� �� -> ����
  ���� �� �� -> ����
  ���� �� �� -> ����
  ���� �� �� -> ����
  ���� �� ȭ -> ����*/

typedef struct result
{
	int year, month, day, hour, minute;
	int y_first, y_second, m_first, m_second, d_first, d_second;
	int c, n, i;
}results;

void Count_saju(results Y, results M, results D, results H, results MIN);


int main(void)
{
	results Palja;
	results A;

	Palja.year = 0;
	Palja.month = 0;
	Palja.day = 0;
	Palja.hour = 0;
	Palja.minute = 0;
	int y_first = 0, y_second = 0, m_first = 0, m_second = 0, d_first = 0, d_second = 0;
	int c = 0, n = 0, i = 0;
	char chun[21] = "���������������Ӱ�";
	char gan[25] = "�����ι�������̽�������";

	printf("��������\n\n");

	printf("�¾ �ظ� �Է��Ͻÿ�. ex) 2000��\n");
	scanf("%d", &Palja.year);

	printf("\n�¾ ���� �Է��Ͻÿ�. ex) 01��\n");
	scanf("%d", &Palja.month);

	printf("\n�¾ ���� �Է��Ͻÿ�. ex) 01��\n");
	scanf("%d", &Palja.day);

	printf("\n�¾ �ø� �Է��Ͻÿ�.(24�� ǥ��� ���)\n");
	scanf("%d", &Palja.hour);

	printf("\n�¾ ���� �Է��Ͻÿ�.\n");
	scanf("%d", &Palja.minute);

	A = Count_saju(Palja);

	printf("\n%d�� %d�� %d�� %d�� %d��\n", Palja.year, Palja.month, Palja.day, Palja.hour, Palja.minute);

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

	printf("�� ");

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

	printf("�� ");

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

	printf("�� ");

	if (d_first == 1 || d_first == 6)
	{
		if ((hour == 23 && (30 <= minute && minute <= 59)) || (hour == 24 && (0 <= minute && minute <= 59)) || (hour == 0 && (0 <= minute && minute <= 59)) || (hour == 1 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[0], gan[1]);
		}

		if ((hour == 1 && (30 <= minute && minute <= 59)) || (hour == 2 && (0 <= minute && minute <= 59)) || (hour == 3 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[2], gan[3]);
		}

		if ((hour == 3 && (30 <= minute && minute <= 59)) || (hour == 4 && (0 <= minute && minute <= 59)) || (hour == 5 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[4], gan[5]);
		}

		if ((hour == 5 && (30 <= minute && minute <= 59)) || (hour == 6 && (0 <= minute && minute <= 59)) || (hour == 7 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[6], gan[7]);
		}

		if ((hour == 7 && (30 <= minute && minute <= 59)) || (hour == 8 && (0 <= minute && minute <= 59)) || (hour == 9 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[8], gan[9]);
		}

		if ((hour == 9 && (30 <= minute && minute <= 59)) || (hour == 10 && (0 <= minute && minute <= 59)) || (hour == 11 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[10], gan[11]);
		}

		if ((hour == 11 && (30 <= minute && minute <= 59)) || (hour == 12 && (0 <= minute && minute <= 59)) || (hour == 13 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[12], gan[13]);
		}

		if ((hour == 13 && (30 <= minute && minute <= 59)) || (hour == 14 && (0 <= minute && minute <= 59)) || (hour == 15 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[14], gan[15]);
		}

		if ((hour == 15 && (30 <= minute && minute <= 59)) || (hour == 16 && (0 <= minute && minute <= 59)) || (hour == 17 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[16], gan[17]);
		}

		if ((hour == 17 && (30 <= minute && minute <= 59)) || (hour == 18 && (0 <= minute && minute <= 59)) || (hour == 19 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[18], gan[19]);
		}

		if ((hour == 19 && (30 <= minute && minute <= 59)) || (hour == 20 && (0 <= minute && minute <= 59)) || (hour == 21 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[20], gan[21]);
		}

		if ((hour == 21 && (30 <= minute && minute <= 59)) || (hour == 22 && (0 <= minute && minute <= 59)) || (hour == 23 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[22], gan[23]);
		}
	}

	if (d_first == 2 || d_first == 7)
	{
		if ((hour == 23 && (30 <= minute && minute <= 59)) || (hour == 24 && (0 <= minute && minute <= 59)) || (hour == 0 && (0 <= minute && minute <= 59)) || (hour == 1 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[0], gan[1]);
		}

		if ((hour == 1 && (30 <= minute && minute <= 59)) || (hour == 2 && (0 <= minute && minute <= 59)) || (hour == 3 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[2], gan[3]);
		}

		if ((hour == 3 && (30 <= minute && minute <= 59)) || (hour == 4 && (0 <= minute && minute <= 59)) || (hour == 5 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[4], gan[5]);
		}

		if ((hour == 5 && (30 <= minute && minute <= 59)) || (hour == 6 && (0 <= minute && minute <= 59)) || (hour == 7 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[6], gan[7]);
		}

		if ((hour == 7 && (30 <= minute && minute <= 59)) || (hour == 8 && (0 <= minute && minute <= 59)) || (hour == 9 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[8], gan[9]);
		}

		if ((hour == 9 && (30 <= minute && minute <= 59)) || (hour == 10 && (0 <= minute && minute <= 59)) || (hour == 11 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[10], gan[11]);
		}

		if ((hour == 11 && (30 <= minute && minute <= 59)) || (hour == 12 && (0 <= minute && minute <= 59)) || (hour == 13 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[12], gan[13]);
		}

		if ((hour == 13 && (30 <= minute && minute <= 59)) || (hour == 14 && (0 <= minute && minute <= 59)) || (hour == 15 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[14], gan[15]);
		}

		if ((hour == 15 && (30 <= minute && minute <= 59)) || (hour == 16 && (0 <= minute && minute <= 59)) || (hour == 17 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[16], gan[17]);
		}

		if ((hour == 17 && (30 <= minute && minute <= 59)) || (hour == 18 && (0 <= minute && minute <= 59)) || (hour == 19 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[18], gan[19]);
		}

		if ((hour == 19 && (30 <= minute && minute <= 59)) || (hour == 20 && (0 <= minute && minute <= 59)) || (hour == 21 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[20], gan[21]);
		}

		if ((hour == 21 && (30 <= minute && minute <= 59)) || (hour == 22 && (0 <= minute && minute <= 59)) || (hour == 23 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[22], gan[23]);
		}
	}

	if (d_first == 3 || d_first == 8)
	{
		if ((hour == 23 && (30 <= minute && minute <= 59)) || (hour == 24 && (0 <= minute && minute <= 59)) || (hour == 0 && (0 <= minute && minute <= 59)) || (hour == 1 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[0], gan[1]);
		}

		if ((hour == 1 && (30 <= minute && minute <= 59)) || (hour == 2 && (0 <= minute && minute <= 59)) || (hour == 3 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[2], gan[3]);
		}

		if ((hour == 3 && (30 <= minute && minute <= 59)) || (hour == 4 && (0 <= minute && minute <= 59)) || (hour == 5 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[4], gan[5]);
		}

		if ((hour == 5 && (30 <= minute && minute <= 59)) || (hour == 6 && (0 <= minute && minute <= 59)) || (hour == 7 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[6], gan[7]);
		}

		if ((hour == 7 && (30 <= minute && minute <= 59)) || (hour == 8 && (0 <= minute && minute <= 59)) || (hour == 9 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[8], gan[9]);
		}

		if ((hour == 9 && (30 <= minute && minute <= 59)) || (hour == 10 && (0 <= minute && minute <= 59)) || (hour == 11 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[10], gan[11]);
		}

		if ((hour == 11 && (30 <= minute && minute <= 59)) || (hour == 12 && (0 <= minute && minute <= 59)) || (hour == 13 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[12], gan[13]);
		}

		if ((hour == 13 && (30 <= minute && minute <= 59)) || (hour == 14 && (0 <= minute && minute <= 59)) || (hour == 15 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[14], gan[15]);
		}

		if ((hour == 15 && (30 <= minute && minute <= 59)) || (hour == 16 && (0 <= minute && minute <= 59)) || (hour == 17 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[16], gan[17]);
		}

		if ((hour == 17 && (30 <= minute && minute <= 59)) || (hour == 18 && (0 <= minute && minute <= 59)) || (hour == 19 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[18], gan[19]);
		}

		if ((hour == 19 && (30 <= minute && minute <= 59)) || (hour == 20 && (0 <= minute && minute <= 59)) || (hour == 21 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[20], gan[21]);
		}

		if ((hour == 21 && (30 <= minute && minute <= 59)) || (hour == 22 && (0 <= minute && minute <= 59)) || (hour == 23 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[22], gan[23]);
		}
	}

	if (d_first == 4 || d_first == 9)
	{
		if ((hour == 23 && (30 <= minute && minute <= 59)) || (hour == 24 && (0 <= minute && minute <= 59)) || (hour == 0 && (0 <= minute && minute <= 59)) || (hour == 1 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[0], gan[1]);
		}

		if ((hour == 1 && (30 <= minute && minute <= 59)) || (hour == 2 && (0 <= minute && minute <= 59)) || (hour == 3 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[2], gan[3]);
		}

		if ((hour == 3 && (30 <= minute && minute <= 59)) || (hour == 4 && (0 <= minute && minute <= 59)) || (hour == 5 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[4], gan[5]);
		}

		if ((hour == 5 && (30 <= minute && minute <= 59)) || (hour == 6 && (0 <= minute && minute <= 59)) || (hour == 7 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[6], gan[7]);
		}

		if ((hour == 7 && (30 <= minute && minute <= 59)) || (hour == 8 && (0 <= minute && minute <= 59)) || (hour == 9 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[8], gan[9]);
		}

		if ((hour == 9 && (30 <= minute && minute <= 59)) || (hour == 10 && (0 <= minute && minute <= 59)) || (hour == 11 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[10], gan[11]);
		}

		if ((hour == 11 && (30 <= minute && minute <= 59)) || (hour == 12 && (0 <= minute && minute <= 59)) || (hour == 13 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[12], gan[13]);
		}

		if ((hour == 13 && (30 <= minute && minute <= 59)) || (hour == 14 && (0 <= minute && minute <= 59)) || (hour == 15 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[14], gan[15]);
		}

		if ((hour == 15 && (30 <= minute && minute <= 59)) || (hour == 16 && (0 <= minute && minute <= 59)) || (hour == 17 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[16], gan[17]);
		}

		if ((hour == 17 && (30 <= minute && minute <= 59)) || (hour == 18 && (0 <= minute && minute <= 59)) || (hour == 19 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[18], gan[19]);
		}

		if ((hour == 19 && (30 <= minute && minute <= 59)) || (hour == 20 && (0 <= minute && minute <= 59)) || (hour == 21 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[20], gan[21]);
		}

		if ((hour == 21 && (30 <= minute && minute <= 59)) || (hour == 22 && (0 <= minute && minute <= 59)) || (hour == 23 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[22], gan[23]);
		}
	}

	if (d_first == 5 || d_first == 10)
	{
		if ((hour == 23 && (30 <= minute && minute <= 59)) || (hour == 24 && (0 <= minute && minute <= 59)) || (hour == 0 && (0 <= minute && minute <= 59)) || (hour == 1 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[0], gan[1]);
		}

		if ((hour == 1 && (30 <= minute && minute <= 59)) || (hour == 2 && (0 <= minute && minute <= 59)) || (hour == 3 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[2], gan[3]);
		}

		if ((hour == 3 && (30 <= minute && minute <= 59)) || (hour == 4 && (0 <= minute && minute <= 59)) || (hour == 5 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[0], chun[1]);
			printf("%c%c��", gan[4], gan[5]);
		}

		if ((hour == 5 && (30 <= minute && minute <= 59)) || (hour == 6 && (0 <= minute && minute <= 59)) || (hour == 7 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[2], chun[3]);
			printf("%c%c��", gan[6], gan[7]);
		}

		if ((hour == 7 && (30 <= minute && minute <= 59)) || (hour == 8 && (0 <= minute && minute <= 59)) || (hour == 9 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[4], chun[5]);
			printf("%c%c��", gan[8], gan[9]);
		}

		if ((hour == 9 && (30 <= minute && minute <= 59)) || (hour == 10 && (0 <= minute && minute <= 59)) || (hour == 11 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[6], chun[7]);
			printf("%c%c��", gan[10], gan[11]);
		}

		if ((hour == 11 && (30 <= minute && minute <= 59)) || (hour == 12 && (0 <= minute && minute <= 59)) || (hour == 13 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[8], chun[9]);
			printf("%c%c��", gan[12], gan[13]);
		}

		if ((hour == 13 && (30 <= minute && minute <= 59)) || (hour == 14 && (0 <= minute && minute <= 59)) || (hour == 15 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[10], chun[11]);
			printf("%c%c��", gan[14], gan[15]);
		}

		if ((hour == 15 && (30 <= minute && minute <= 59)) || (hour == 16 && (0 <= minute && minute <= 59)) || (hour == 17 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[12], chun[13]);
			printf("%c%c��", gan[16], gan[17]);
		}

		if ((hour == 17 && (30 <= minute && minute <= 59)) || (hour == 18 && (0 <= minute && minute <= 59)) || (hour == 19 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[14], chun[15]);
			printf("%c%c��", gan[18], gan[19]);
		}

		if ((hour == 19 && (30 <= minute && minute <= 59)) || (hour == 20 && (0 <= minute && minute <= 59)) || (hour == 21 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[16], chun[17]);
			printf("%c%c��", gan[20], gan[21]);
		}

		if ((hour == 21 && (30 <= minute && minute <= 59)) || (hour == 22 && (0 <= minute && minute <= 59)) || (hour == 23 && (0 <= minute && minute <= 29)))
		{
			printf("%c%c", chun[18], chun[19]);
			printf("%c%c��", gan[22], gan[23]);
		}
	}

}

void Count_saju(results Y, results M, results D, results H, results MIN)
{
	results Saju;

	Saju.c = Y.year / 100;
	Saju.n = Y.year % 100;

	Saju.y_first = (Y.year + 7) % 10;
	Saju.y_second = (Y.year + 9) % 12;

	Saju.m_first = (2 * Y.year + M.month + 3) % 10;
	Saju.m_second = (M.month + 1) % 12;

	if (M.month == 1 || M.month == 2)
	{
		Y.year -= 1;
	}

	if (M.month == 1)
	{
		M.month = 13;
	}

	if (M.month == 2)
	{
		M.month = 14;
	}

	Saju.d_first = (4 * Saju.c + (Saju.c / 4) + 5 * Saju.n + (Saju.n / 4) + ((3 * M.month) / 5) + D.day + 7) % 10;
	Saju.d_second = (8 * Saju.c + (Saju.c / 4) + 5 * Saju.n + (Saju.n / 4) + 6 * M.month + ((3 * M.month) / 5) + D.day + 1) % 12;

	return Saju;
}