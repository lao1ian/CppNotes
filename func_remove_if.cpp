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
#include <vector>
#include<functional>

using namespace std;

int main() {
	vector<int> v{ 1,2,3,3,3,3,3,4,5,6,7 };
	int fi = 3;
	vector<int>::iterator it = remove_if(v.begin(), v.end(), [fi](int i) {return 3 == i;});
	cout << *it << endl;
	for (const int &i : v) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

