// primer_614.cpp : �������̨Ӧ�ó������ڵ㡣
// 1.�β��Ǻ������ڵľֲ�������������ʵ�γ�ʼ�������˶��ѡ�

#include "stdafx.h"
#include<iostream>

using namespace std;

void f(int);
void g(int &);
void h(int &&);

int main()
{
	int a = 1;
	int &b = a;
	int &&c = 2;//��ֵ����c����ֵ��
	int &d = b;
	

	/*f(a);
	f(b);
	f(c);
	f(3);*/

	//g(a);
	//g(b);
	//g(c);
	//g(3);//wrong

	//h(a);//wrong
	//h(b);//wrong
	//h(c);//wrong
	//h(3);
	
    return 0;
}

void f(int t1) {
	cout << t1 << endl;
}

void g(int &t2) {
	cout << t2 << endl;
}

void h(int &&t3) {
	cout << t3 << endl;
}