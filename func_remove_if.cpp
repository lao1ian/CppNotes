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
#include <vector>
#include<functional>

using namespace std;

int main() {
	vector<int> v{ 1,2,3,3,3,3,3,4,5,6,7 };
	int fi = 3;
	vector<int>::iterator it = remove_if(v.begin(), v.end(), [fi](int i) {return 3 == i;});
	cout << *it << endl;
	for (const int &i : v) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

