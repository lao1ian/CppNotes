// ˵��ֻ��inserterλ�û�ָ�ԭλ�ã���front_inserter��back_inserter���λ�á�
// ��������begin��end�����������ڣ����ǲ�ָ���κ�ֵ��
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

