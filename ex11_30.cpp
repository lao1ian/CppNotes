// map的下标操作可以添加和初始化，所以相当于创建目录并往里里添加。
//

#include "stdafx.h"
#include<string>
#include<map>
#include<set>
#include<iostream>

using namespace std;

int main()
{
	std::multimap<string, string> authors{
		{ "alan", "DMA" },{ "pezy", "LeetCode" },{ "alan", "CLRS" },
		{ "wang", "FTP" },{ "pezy", "CP5" },{ "wang", "CPP-Concurrency" } };
	map<string, multiset<string>> order_aut;
	for (auto const &aut : authors) {
		order_aut[aut.first].insert(aut.second);
	}
	for (auto const &aut : order_aut) {
		cout << aut.first << ": " ;
		for (auto const &work : aut.second) {
			cout << work << " ";
		}
		cout << "..." << endl;
	}


	return 0;
}

