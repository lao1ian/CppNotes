//��ľ�̬�ǳ�����Աֻ���������ʼ������Ϊ�ó�Ա���������������Ķ���
//

#include<string>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(const string &);
	Employee(const Employee &) = delete;
	Employee &operator =(const Employee &) = delete;
	~Employee();

private:
	string name;
	int num ;
	static int i;
};

Employee::Employee()
{
	num = i++;
}

Employee::Employee(const string & n)
{
	name = n;
	num = i++;
}

Employee::~Employee()
{
}

int Employee::i = 100;