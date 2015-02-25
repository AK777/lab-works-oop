// lab0-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"

int main(int argc, char* argv[])
{
	int i;
	for (i = 100; i >= 1; --i)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
			if (i != 2)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	getchar();
	return 0;
}



