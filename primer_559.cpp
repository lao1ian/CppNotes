// primer_559.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<memory>
#include<set>
#include<vector>

using namespace std;

class quote
{
public:
	quote();
	quote(int);
	~quote();

	int no;
private:
	
};

quote::quote(int i):no(i)
{
}

quote::~quote()
{
}

bool comp(const shared_ptr<quote> &lhs, const shared_ptr<quote> &rhs) {
	return lhs->no < rhs->no;
}

int main()
{
	vector<shared_ptr<quote>> v;
	for (int i = 9; i > 0; i--)
	{
		v.push_back(make_shared<quote>(i));
		v.push_back(make_shared<quote>(i));
	}
	for (auto q : v) {
		cout << q->no << " ";
	}
	cout << endl;

	
	multiset<shared_ptr<quote>, decltype(comp)*> ite(v.cbegin(), v.cend(), comp);
	//for (size_t i = 0; i < 18; i++)
	//{
	//	//һ������insert������
		//multiset���й��췽�����£�
		//multiset c(const value_type *first, const value_type* last,op):��opΪ����׼�򣬸���[first, last)֮��Ԫ�ع����¼��ϡ�
	//	ite.insert(v[i]);
	//}
	for (auto it = ite.cbegin(); it != ite.cend(); it++) {
		//�˴�����ȥ��������
		//���ܣ���Ϊ��Աѡ��->�������ȼ����ڽ����á�*�������ȼ���
		cout << (*it)->no << " ";			
	}
	cout << endl;
	
	
	

    return 0;
}

