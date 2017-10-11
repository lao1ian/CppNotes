// ˵��ֻ��inserterλ�û�ָ�ԭλ�ã���front_inserter��back_inserter���λ�á�
// ��������begin��end�����������ڣ����ǲ�ָ���κ�ֵ��
// sort֮����unique��uniqueֻ��ʹ�������ظ������Ƶ����棬���ڲ�������û�а취��
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