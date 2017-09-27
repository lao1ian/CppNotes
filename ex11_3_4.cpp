// remove_if函数是把一元谓词返回为真的元素移到后部，但其值可能发生变化！此函数仅保证，未被移动的
//部分保持原来的顺序和值，并返回一个未被移动部分的尾后迭代器。因其不稳定性，故常常和erase函数一起
//使用。
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void CountWord(map<string, int> &m) {
	string word;
	while (cin >> word)
	{
		for (auto ch : word) ch = tolower(ch);
		word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
		++m[word];
	}
}


int main()
{
	map<string, int> mm;
	CountWord(mm);
	for (auto m : mm)	cout << m.first << ":" << m.second << " time(s)" << endl;
	return 0;
}

