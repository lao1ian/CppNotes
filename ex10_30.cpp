// 类名（args）可以直接生成一个右值，而不需要都生成如 类名 变量名（args）的左值。
//

#include "stdafx.h"
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream ifs("D:/Fcode/myVs/ints.txt");
	istream_iterator<int> in(ifs), eof;
	vector<int> v;
	copy(in, eof, back_inserter(v));
	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));
	cout << endl;
	cout << string("Newland")<<endl;
	return 0;
}

