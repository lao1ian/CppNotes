// 说明只有inserter位置会恢复原位置，而front_inserter和back_inserter会变位置。
//

#include "stdafx.h"
#include<list>
#include<algorithm>
#include<functional>
#include<iostream>
#include<numeric>
#include<iterator>

using namespace std;

void printList(const list<int> &l){
	for (const int &i : l) {
		cout << i << ",";
	}
	cout << endl;
}

int main()
{
	list < int> lst = { 1,2,3,4 };
	list < int> lst2,lst3,lst4;
	copy(lst.cbegin(), lst.cend(), front_inserter(lst2));
	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
	copy(lst.cbegin(), lst.cend(), back_inserter(lst4));
	
	printList(lst2);
	printList(lst3);
	printList(lst4);
	
	return 0;
}

