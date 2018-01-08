// VariablesAndTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i1 = 1L;
	std::wcout << L"i1= " << i1 << std::endl;
	int i2;
	i2 = 2;
	std::cout << "i2= " << i2 << std::endl;
	int i3(3);
	std::cout << "i3= " << i3 << std::endl;

	double d1 = 2.2;
	double d2 = i1;
	int i4 = static_cast<int>(d1);
	std::cout << "d1= " << d1 << std::endl;
	std::cout << "d2= " << d2 << std::endl;
	std::cout << "i4= " << i4 << std::endl;

	char c1 = 'a';
	std::cout << "c1= " << c1 << std::endl;

	bool flag = false;
	std::cout << "flag= " << flag << std::endl;
	flag = static_cast<bool>(i1);
	std::cout << "flag= " << flag << std::endl;
	flag = static_cast<bool>(d1);
	std::cout << "flag= " << flag << std::endl;

	return 0;
}

