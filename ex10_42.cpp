//list���÷����㷨����Ϊ�޷�������ʡ����Ƕ������Լ����еĳ�Ա������
//�ص�����Щ����������void���Ҷ�ֱ�Ӹı�list��f_list��
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

