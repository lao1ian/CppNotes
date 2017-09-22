// unique函数仅仅只是将“连续”的重复项去重，并将重复的部分移到尾后，故在使用unique之前通常
//需要用sort将其排序并把重复的放在一起
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

