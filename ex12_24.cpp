// getline输入超长时会使后面的cin无法执行。
//

#include "stdafx.h"
#include<string>
#include<memory>
#include<iostream>
#include<new>

using namespace std;


int main()
{
	// need to tell the size.
	cout << "The length of the string: ";
	int size;
	cin >> size;
	cin.ignore();              // 此处换成cin.get()亦可。
	cout << "Plz enter the string: ";
	char *ca = new char[size + 1];
	cin.get(ca, size + 1);
	cout << ca << endl;
	delete[] ca;

	// Test: if longer than the array size, we will lost the characters which
	// are out of range.

    return 0;
}

