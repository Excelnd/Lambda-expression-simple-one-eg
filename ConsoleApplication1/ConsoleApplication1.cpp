// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int one = 1;
	int two = 2;
	int three = 3;

	// capture one and two by value
	[one, two]() {cout << one << ", " << two << endl; }();

    return 0;
}

