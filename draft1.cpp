// draft1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<memory>
#include<string>
#include<iostream> 

using namespace std;

int main() {
	char *arr = "hello";
	cout << arr << endl;//IO��Ϊchar *������һ��<<�汾��

	int i = 24;
	int *pi = &i;
	cout << "pointer " << pi << " " << *pi << endl;
	
	
	
	
	return 0;
}
