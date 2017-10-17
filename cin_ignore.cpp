// 1. 关于这个sync方法在不同的编译器中有不同的实现。VC中确实可以清空cin的缓存，但是在GNU(和vs2017)中，不行。
//    因此使用sync方法是没有通用性的。ignore才是最可靠的清楚缓存的方法。
// 2. clear更改流的条件状态至未错误状态后，对流的操作才有效。

#include "stdafx.h"
#include <map>
#include <set>
#include <string>
#include <iostream>
#include <memory> 

using namespace std;

int main()
{
	char str[10];
	cin.get(str, 6);
	cout << str << endl;
	cout << cin.rdstate() << endl;
	cin.clear();
	//cin.sync();
	cin.ignore();
	cout << cin.rdstate() << endl;
	cin.get(str, 6);
	cout << str << endl;

	return 0;
}
