// primer_559.cpp : 定义控制台应用程序的入口点。
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
	//	//一定得用insert方法吗？
		//multiset中有构造方法如下：
		//multiset c(const value_type *first, const value_type* last,op):以op为排序准则，复制[first, last)之间元素构成新集合。
	//	ite.insert(v[i]);
	//}
	for (auto it = ite.cbegin(); it != ite.cend(); it++) {
		//此处可以去掉括号吗？
		//不能，因为成员选择“->”的优先级高于解引用“*”的优先级。
		cout << (*it)->no << " ";			
	}
	cout << endl;
	
	
	

    return 0;
}

