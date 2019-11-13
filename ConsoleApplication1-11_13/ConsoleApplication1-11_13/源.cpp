#define _CRT_SECURE_NO_WARNINGS 1
#if 0
class Base
{
public:
	void SetBase(int b)
	{
		_b = b;
	}

	void TestFunc(int)
	{}

	void PrintBase()
	{
		cout << _b << endl;
	}

	int _b;
};


struct Derived : public Base
{
public:
	void SetDerived(int b, int d)
	{
		_b = b;
	}

	void TestFunc()
	{}

	char _b;
};

int main()
{
	cout << sizeof(Derived) << endl;

	Derived d;
	d._b = 1;
	d.Base::_b = 2;

	d.Base::TestFunc(10);
	return 0;
}
#endif

// 

// �������û�ж��幹�캯�� ���� �������Ĭ�ϵĹ��캯�����޲κ�ȫȱʡ�Ĺ��캯����
// 1. ��������Բ��ö���
// 2. �����������Ҫ���������飬���Լ��Ĺ��캯����ʽ����
class Base
{
public:
	Base(int b = 10)
		: _b(b)
	{}

	void SetBase(int b)
	{
		_b = b;
	}

	void TestFunc(int)
	{}

	void PrintBase()
	{
		cout << _b << endl;
	}

	int _b;
};


struct Derived : public Base
{
public:
	// �����������������ɵ�Ĭ�Ϲ��캯��
	//Derived()
	//	: Base()
	//{}

	void SetDerived(int b, int d)
	{
		_b = b;
		_d = d;
	}

	void TestFunc()
	{}

	char _d;
};
