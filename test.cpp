// 1. �������sync�����ڲ�ͬ�ı��������в�ͬ��ʵ�֡�VC��ȷʵ�������cin�Ļ��棬������GNU(��vs2017)�У����С�
//    ���ʹ��sync������û��ͨ���Եġ�ignore������ɿ����������ķ�����
// 2. clear������������״̬��δ����״̬�󣬶����Ĳ�������Ч��

#include "stdafx.h"
#include <map>
#include <set>
#include <string>
#include <iostream>
#include <memory> 

using namespace std;

int main()
{
	char str[10];
	cin.get(str, 6);
	cout << str << endl;
	cout << cin.rdstate() << endl;
	cin.clear();
	//cin.sync();
	cin.ignore();
	cout << cin.rdstate() << endl;
	cin.get(str, 6);
	cout << str << endl;

	return 0;
}