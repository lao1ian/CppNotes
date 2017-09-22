// 说明只有inserter位置会恢复原位置，而front_inserter和back_inserter会变位置。
// 空容器的begin和end迭代器都存在，但是不指向任何值。
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
	vector<int> vec{ 1,2,3,3,4,5,5,6,7};
	list<int> lst;
	unique_copy(vec.begin(), vec.end(), inserter(lst,lst.begin()));
	printList(lst);
	
	return 0;
}

