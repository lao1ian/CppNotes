// 说明只有inserter位置会恢复原位置，而front_inserter和back_inserter会变位置。
// 空容器的begin和end迭代器都存在，但是不指向任何值。
// sort之后再unique，unique只能使连续的重复对象移到后面，对于不连续的没有办法。
// 

#include "stdafx.h"
#include<list>
#include<algorithm>
#include<functional>
#include<iostream>
#include<numeric>
#include<iterator>
#include<vector>

using namespace std;

void printList(const list<int> &l){
	for (const int &i : l) {
		cout << i << ",";
	}
	cout << endl;
}



int main()
{
	vector<int> vec{ 1,2,3,4,5,3,6,5,7};
	list<int> lst,lst2,lst3;
	sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), inserter(lst, lst.begin()));
	unique_copy(vec.begin(), vec.end(), front_inserter(lst2));
	unique_copy(vec.begin(), vec.end(), back_inserter(lst3));
	printList(lst);
	printList(lst2);
	printList(lst3);
	return 0;
}

istream_iterator<int> eof;