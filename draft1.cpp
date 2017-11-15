// draft1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<memory>
#include<string>
#include<iostream> 

using namespace std;

int main() {
	char *arr = "hello";
	cout << arr << endl;//IO库为char *定义了一个<<版本。

	int i = 24;
	int *pi = &i;
	cout << "pointer " << pi << " " << *pi << endl;
	
	
	
	
	return 0;
}
