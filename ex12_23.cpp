
// ex12_23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<memory>
#include<new>
#include<iostream>

using namespace std;

int main()
{
	const char *c1 = "Hello, ";
	const char *c2 = "world.";
	unsigned len = strlen(c1) + strlen(c2) + 1;
	char *ia = new char[len]();
	strcat_s(ia, len, c1);
	strcat_s(ia, len, c2);
	cout << ia << endl;

	string s1 = "Hello, ";
	string s2 = "world.";
	strcpy_s(ia, len, (s1 + s2).c_str());
	cout << ia << endl;
	
	
    return 0;
}

