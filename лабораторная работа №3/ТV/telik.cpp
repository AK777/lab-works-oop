
#include "stdafx.h"
#include "TVSet.h"
#include <assert.h>
#include "sstream"



void TDD()
{
	CTVSet someTV; 

	someTV.TurnOn(); 
	assert(someTV.GetNumberOfChannel() == 1);

	someTV.TurnOn(); 
	assert(someTV.GetNumberOfChannel() == 1);

	assert(someTV.SelectChannel(6));
	assert(someTV.GetNumberOfChannel() == 6);

	someTV.SelectChannel(102);
	assert(someTV.GetNumberOfChannel() == 6);

	someTV.TurnOff(); 
	assert(someTV.GetNumberOfChannel() == 0);

	someTV.TurnOff(); 
	assert(someTV.GetNumberOfChannel() == 0);

	cout << "Тестирование успешно пройдено" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	setlocale(LC_ALL, "Russian");
	cout << "Программа телевизор" << endl;
	TDD(); 
	getchar();
	return 0;
}

