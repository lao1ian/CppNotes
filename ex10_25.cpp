// unique��������ֻ�ǽ������������ظ���ȥ�أ������ظ��Ĳ����Ƶ�β�󣬹���ʹ��unique֮ǰͨ��
//��Ҫ��sort�������򲢰��ظ��ķ���һ��
//

#include "stdafx.h"
#include<functional>
#include<string>
#include<algorithm>
#include<numeric>
#include<iostream>
#include<vector>

using namespace std;
using namespace std::placeholders;

void elimdups(vector<string>& vs)
{
	std::sort(vs.begin(), vs.end());
	vs.erase(unique(vs.begin(), vs.end()), vs.end());
}

bool check_size(const string &s, string::size_type &sz) {
	return s.size() > sz;
}

void biggies(vector<string> &s, const vector<string>::size_type &sz) {
	elimdups(s);
	auto ret = partition(s.begin(), s.end(), bind(check_size, _1, sz));
	for (auto iter = s.begin(); iter != ret; ++iter) {
		cout << *iter << ", ";
	}
	cout << endl;
}

int main()
{
	vector<string> vec{ "always", "look", "always", "for", "you" };
	biggies(vec, 3);
    return 0;
}

