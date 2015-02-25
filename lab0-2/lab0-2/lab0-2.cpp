// lab0-2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "stdlib.h"
#include <locale.h>


int SumDigits(int i);
int StringToInt(const char *str, bool & err);

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int upLimit = 1000;
	int i;
	int sumDig = 0;
	if (argc > 1)
	{
		bool err;
		upLimit = StringToInt(argv[1], err);
		if ((err) || (upLimit <= 1))
		{
			printf("¬едены не корректыные параметры\n");
			return 1;
		}
	}
	for (i = 1; i <= upLimit; i++)
	{
		sumDig = SumDigits(i);
		if (sumDig == 0)
		{
			continue;
		}
		if (i%sumDig == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

int SumDigits(int i)
{
	int sum = 0;
	// цикл продолжаетс€ до тех пор, пока число не станет равным 0
	while (i != 0)
	{
		sum += i % 10;
		i /= 10;
	}
	return sum;
}
int StringToInt(const char *str, bool & err)
{
	char *pLastChar = NULL;
	int param = strtol(str, &pLastChar, 10);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
	
}