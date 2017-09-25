//list不用泛型算法，因为无法随机访问。但是定义了自己独有的成员函数，
//特点是这些操作都返回void，且都直接改变list或f_list。
//

#include "stdafx.h"
#include<string>
#include<list>
#include<algorithm>
#include<iostream>

using namespace std;

void elimdups(list<string> &l) {
	l.sort();
	l.unique();
}

void print(const list<string> &l) {
	for (const string &word : l) 
		cout << word << " ";
	cout << endl;
}

int main()
{
	list<string> lst{ "the","quick", "red", "fox", "jumps", "over", "quick", "red", "slow", "the", "turtle" };
	elimdups(lst);
	print(lst);
    return 0;
}

