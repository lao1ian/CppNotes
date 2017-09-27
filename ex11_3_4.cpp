// remove_if�����ǰ�һԪν�ʷ���Ϊ���Ԫ���Ƶ��󲿣�����ֵ���ܷ����仯���˺�������֤��δ���ƶ���
//���ֱ���ԭ����˳���ֵ��������һ��δ���ƶ����ֵ�β������������䲻�ȶ��ԣ��ʳ�����erase����һ��
//ʹ�á�
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void CountWord(map<string, int> &m) {
	string word;
	while (cin >> word)
	{
		for (auto ch : word) ch = tolower(ch);
		word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
		++m[word];
	}
}


int main()
{
	map<string, int> mm;
	CountWord(mm);
	for (auto m : mm)	cout << m.first << ":" << m.second << " time(s)" << endl;
	return 0;
}

